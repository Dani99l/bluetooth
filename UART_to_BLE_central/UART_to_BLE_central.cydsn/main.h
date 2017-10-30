/*******************************************************************************
* File Name: main.h
*
* Description:
*  Contains the function prototypes and constants available to the example
*  project.
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(MAIN_H)

    #define MAIN_H
    
    #include <project.h>
    #include "app_Ble.h"
    #include "app_LED.h"
    #include "stdbool.h"    

    /***************************************
    *   Conditional compilation parameters
    ***************************************/      
//    #define     FLOW_CONTROL
  //  #define     PRINT_MESSAGE_LOG
//    #define     LOW_POWER_MODE
    CYBLE_API_RESULT_T      bleApiResult;
    
    /************APP BLE*****************/
    volatile static bool peerDeviceFound         = false;
    volatile static bool notificationEnabled     = false;

    CYBLE_API_RESULT_T      cyBle_last_state;
    CYBLE_GATT_ATTR_HANDLE_RANGE_T  attrHandleRange;
    CYBLE_GATTC_FIND_INFO_REQ_T     charDescHandleRange;
    
    /***************************************
    *       Glabal Variables
    ***************************************/
    int packetSum;
    
    
    /***************************************
    *       Function Prototypes
    ***************************************/
    //void AppCallBack(uint32 , void *);  
    void stopBLE();
    void startBLE();
    void start();
    //void HandleBleProcessing(void);
   // void enableNotifications();
    void AppCallBack(uint32 event, void *eventParam);
    void packetReceivedToPrint(CYBLE_GATTC_HANDLE_VALUE_NTF_PARAM_T *uartRxDataNotification);    
    

    
    
    
#endif

/* [] END OF FILE */
