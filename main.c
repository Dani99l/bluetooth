/*******************************************************************************
* File Name: main.c
*
* Version: 1.0
*
* Description:
* Works as the slave(periferical) sensor, connects with the master(server);
* based on example code from cypress -Project 20
*
*******************************************************************************/

#include "main.h"
#include "stdio.h"


int main()
{       
       
       
   #ifdef LOW_POWER_MODE    
            CYBLE_LP_MODE_T         lpMode;
          //  CYBLE_BLESS_STATE_T     blessState
    #endif


    while(1){
        state_machine();
    }

}
    

// State machine allows to read the sensors, set the ble component and send data to the periferical

void state_machine(){  
     switch(mode){
        
     case START:
        // init interrupts
       
        start();
        UART_UartPutString("\n\r START  \n\r ");
        mode=SENSOR_PACKET;
        break;
        
     case SENSOR_PACKET:
        #ifdef PRINT_MESSAGE_LOG   
        UART_UartPutString("\n\r SENSOR \n\r ");     
        #endif
        
        I2C_1_Start(); 
        createPacket();
        Getsensor_data();
        mode=TX;
        break;
        
     case TX:
        
        #ifdef PRINT_MESSAGE_LOG   
        UART_UartPutString("\n\r After TX mode \n\r ");
        #endif
        
        tx();

        mode=SLEEP;
        break;

     case SLEEP:
        
        //go to sleep mode untill next time to operate! 
        //check sleep time functions
        goSleep();
        #ifdef PRINT_MESSAGE_LOG   
        UART_UartPutString("\n\r After sleep mode \n\r ");
        #endif
        mode=START;
        break;
     
     default:
        #ifdef PRINT_MESSAGE_LOG   
        UART_UartPutString("\n\r DEGUB-> Blocked in DEFAULD Switch modes");
        #endif
        
        break;
    }
}
        
void tx(){
    
       startBLE();
        int check;
        while(1){
            
               do{
                   HandleBleProcessing();
                   CyBle_ProcessEvents();
               }while(CyBle_GetState()!= CYBLE_STATE_CONNECTED);
               
               if(CyBle_GattGetBusStatus() != CYBLE_STACK_STATE_BUSY && check<1){
        
                    sendtoble(buffer);   
      
                    check++;
                }
    //        
    //            if (count>3) {
    //                count=0;
    //              //CyBle_Stop();
    //            } 
    //            if(CyBle_GetState()== CYBLE_STATE_STOPPED) {  //este if bloqueia as mensagem (penso que seja pela reset das interrupções no start)
    //                start();
    //                startBLE();
    //            }
                    
                HandleBleProcessing();
                CyBle_ProcessEvents();
        }
        stopBLE();
}

void Getsensor_data(){
       
    #ifdef DEBUG_ble  
     UART_UartPutString("\n\r Getsensor_data function \n\r ");     
    #endif
    
     if(lasTemp==sensor.temperature){
        
        sameTemp++;
    }
    
    
     if(lastHum==sensor.humidity){
        
        sameHum++;
    }
    lasTemp=sensor.temperature;
    lastHum=sensor.humidity;
    
}

void init_globalVariables(){
    
    count=0;
    lasTemp=0;
    lastHum=0;
    sameTemp=0;
    sameHum=0;
    sensor.ID=0;
    sensor.sequence=0;
    sensor.humidity=0;
    sensor.pressure=0;
    sensor.temperature=0;
    
}

uint8* createPacket(uint8 *buffer){
 
    // Packet is a buffer with total data that will be sent 
    // It depends on MTU(maximum bytes allowed )
    
    sensor.humidity= getHum();
    sensor.temperature = getTemp();
    sensor.pressure=3;
    sensor.ID=2;
    sensor.sequence=count;
    count++;
    if(count>=250){
        count=0;
    }
    #ifdef DEBUG_ble  
     UART_UartPutString("\n\r After construct packet \n\r ");     
    #endif
    buffer[PACKET_LENGHT]=sensor.humidity;
    buffer[PACKET_LENGHT-1]=sensor.temperature;
    buffer[PACKET_LENGHT-2]=sensor.pressure;
    buffer[PACKET_LENGHT-3]=sensor.ID;
    buffer[PACKET_LENGHT-4]=sensor.sequence;    
      
    return buffer;
}


void startBLE(){
   //This function init the BLE component, this means, BLE STACK 
   // AppCallBack manages the state BLE machine
    CyBle_Start(AppCallBack);
}

void stopBLE(){
    //Stops any proccesing in BLE Stack
    CyBle_Stop();
    
}

/*******************************************************************************
* Function Name: AppCallBack
********************************************************************************
*
* Summary:
*   Call back function for BLE stack to handle BLESS events
*
* Parameters:
*   event       - the event generated by stack
*   eventParam  - the parameters related to the corresponding event
*
* Return:
*   None.
*
*******************************************************************************/
void AppCallBack(uint32 event, void *eventParam)
{   
    CYBLE_GATT_ERR_CODE_T           errorCode;
    CYBLE_GATTS_WRITE_REQ_PARAM_T   *writeReqParam;
    
    switch (event)
    {
        case CYBLE_EVT_STACK_ON:
                #ifdef PRINT_MESSAGE_LOG   
                 UART_UartPutString("\n\r CYBLE_EVT_STACK_ON \n\r ");
                #endif            
            break;
            
        case CYBLE_EVT_GAP_DEVICE_DISCONNECTED:
                #ifdef PRINT_MESSAGE_LOG   
                 UART_UartPutString("\n\r CYBLE_EVT_GAP_DEVICE_DISCONNECTED \n\r ");
                #endif
            break;
            
        case CYBLE_EVT_GATT_CONNECT_IND:
                #ifdef PRINT_MESSAGE_LOG   
                 UART_UartPutString("\n\r CYBLE_EVT_GATT_CONNECT_IND \n\r ");
                #endif                
            break;
        
        case CYBLE_EVT_GATTS_WRITE_CMD_REQ:
        /** 'Write Command' Request from client device.*/
                #ifdef PRINT_MESSAGE_LOG   
                 UART_UartPutString("\n\r CYBLE_EVT_GATTS_WRITE_CMD_REQ \n\r ");
                #endif 
                HandleUartRxTraffic((CYBLE_GATTS_WRITE_REQ_PARAM_T *) eventParam);
            break;
        
        case CYBLE_EVT_GATTS_XCNHG_MTU_REQ:
            /** 'GATT MTU Exchange Request'*/
                 #ifdef PRINT_MESSAGE_LOG       
                    UART_UartPutString("\n\r CYBLE_EVT_GATTS_XCNHG_MTU_REQ \n\r ");
                 #endif
                
            if(CYBLE_GATT_MTU > ((CYBLE_GATT_XCHG_MTU_PARAM_T *)eventParam)->mtu)
            {
                mtuSize = ((CYBLE_GATT_XCHG_MTU_PARAM_T *)eventParam)->mtu;
            }
            else
            {
                mtuSize = CYBLE_GATT_MTU;
            }
            
            break;
            
//        case CYBLE_EVT_GATTS_WRITE_REQ:
//                 #ifdef PRINT_MESSAGE_LOG       
//                 UART_UartPutString("\n\r CYBLE_EVT_GATTS_WRITE_REQ \n\r ");
//                 #endif
//            writeReqParam = (CYBLE_GATTS_WRITE_REQ_PARAM_T *) eventParam;
//            
//            if(CYBLE_SERVER_UART_SERVER_UART_TX_DATA_CLIENT_CHARACTERISTIC_CONFIGURATION_DESC_HANDLE == \
//                                                                    writeReqParam->handleValPair.attrHandle)
//            {
//                errorCode = CyBle_GattsWriteAttributeValue(&(writeReqParam->handleValPair), \
//                                                0, &cyBle_connHandle, CYBLE_GATT_DB_PEER_INITIATED);
//                
//                if (CYBLE_GATT_ERR_NONE  == errorCode)
//                {
//                    CyBle_GattsWriteRsp(cyBle_connHandle);  //works as an ACK
//                    #ifdef PRINT_MESSAGE_LOG   
//                        UART_UartPutString("\n\r Notifications enabled\n\r");
//                        UART_UartPutString("\n\r Start entering data:\n\r");
//                    #endif
//                }  
//            }
//            
//            break;
        
        default:
            break;
    }
}
    
void start(){
  
    CyGlobalIntEnable;
    
    UART_Start();
    init_globalVariables();
    
    UART_UartPutString("\n\r --------------------- \n\r ");
    UART_UartPutString("\n\r Start peripheral role \n\r ");
    UART_UartPutString("\n\r --------------------- \n\r ");
}



void sendtoble(uint8 *buffer)
{
   //this functions sends data from uart RX and pushes it to the server 

    CYBLE_GATTS_HANDLE_VALUE_NTF_T      uartTxDataNtf;
    
    uint8   index=0;
    //uint8   buffer[mtuSize - 3];
    uint16  uartTxDataLength;
    
    int api;
    
    int i=0;

    uartTxDataNtf.value.val  = buffer;
    uartTxDataNtf.value.len  = sizeof(buffer);
    uartTxDataNtf.attrHandle = CYBLE_SERVER_UART_SERVER_UART_TX_DATA_CHAR_HANDLE;
    
    do{
        api=CyBle_GattsNotification(cyBle_connHandle, &uartTxDataNtf);
        CyBle_ProcessEvents();
    }while(api!=CYBLE_ERROR_OK);  
}