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

#ifndef MAIN_H

    #define MAIN_H
    
    #include <project.h>
    #include "stdbool.h"
    #include "app_Ble.h"
    #include "app_LED.h"
    #include "teste.h"
    #include "htu21d.h"
    #include "bme280.h"
    
    /***************************************
    *   Conditional compilation parameters
    ***************************************/      
  //  #define     FLOW_CONTROL
  //  #define     PRINT_MESSAGE_LOG
  //  #define     DEBUG_ble
  //  #define     LOW_POWER_MODE
    
    
    
    /***************************************
    *       DEFINES Parameters
    ***************************************/
    #define PACKET_LENGHT 0X5   //5 bytes para o pacote (temp, hum, seqn, press, id)
    
    /***************************************
    *       Function Prototypes
    ***************************************/
    void AppCallBack(uint32 , void *);  
  //  void sendtoble(uint8* buffer, uint16 size);
    void sendtoble(uint8 *buf);
    uint8* Getsensor_data();
    uint8 *createPacket(uint8 *buf);
    void start();
    void state_machine();    
    void startBLE();

    /***************************************
    *       Variables declaration
    ***************************************/
    CYBLE_API_RESULT_T      bleApiResult;
    uint8 count;
    uint8 total_dados;
    
    struct Packet{
        uint8 ID;
        uint8 humidity;
        uint8 temperature;
        uint8 pressure;
        uint8 sequence;
    };
    
    enum states{
    START,
    SENSOR_PACKET,
    TX,
    RX,
    SLEEP,
    }mode;

#endif

/* [] END OF FILE */
