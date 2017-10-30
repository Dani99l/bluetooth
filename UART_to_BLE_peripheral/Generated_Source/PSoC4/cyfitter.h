/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.1 Update 1
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* BLE */
#define BLE_bless_isr__INTC_CLR_EN_REG CYREG_CM0_ICER
#define BLE_bless_isr__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define BLE_bless_isr__INTC_MASK 0x1000u
#define BLE_bless_isr__INTC_NUMBER 12u
#define BLE_bless_isr__INTC_PRIOR_MASK 0xC0u
#define BLE_bless_isr__INTC_PRIOR_NUM 3u
#define BLE_bless_isr__INTC_PRIOR_REG CYREG_CM0_IPR3
#define BLE_bless_isr__INTC_SET_EN_REG CYREG_CM0_ISER
#define BLE_bless_isr__INTC_SET_PD_REG CYREG_CM0_ISPR
#define BLE_cy_m0s8_ble__ADC_BUMP1 CYREG_BLE_BLERD_ADC_BUMP1
#define BLE_cy_m0s8_ble__ADC_BUMP2 CYREG_BLE_BLERD_ADC_BUMP2
#define BLE_cy_m0s8_ble__ADV_CH_TX_POWER CYREG_BLE_BLELL_ADV_CH_TX_POWER
#define BLE_cy_m0s8_ble__ADV_CONFIG CYREG_BLE_BLELL_ADV_CONFIG
#define BLE_cy_m0s8_ble__ADV_INTERVAL_TIMEOUT CYREG_BLE_BLELL_ADV_INTERVAL_TIMEOUT
#define BLE_cy_m0s8_ble__ADV_INTR CYREG_BLE_BLELL_ADV_INTR
#define BLE_cy_m0s8_ble__ADV_NEXT_INSTANT CYREG_BLE_BLELL_ADV_NEXT_INSTANT
#define BLE_cy_m0s8_ble__ADV_PARAMS CYREG_BLE_BLELL_ADV_PARAMS
#define BLE_cy_m0s8_ble__ADV_SCN_RSP_TX_FIFO CYREG_BLE_BLELL_ADV_SCN_RSP_TX_FIFO
#define BLE_cy_m0s8_ble__ADV_TX_DATA_FIFO CYREG_BLE_BLELL_ADV_TX_DATA_FIFO
#define BLE_cy_m0s8_ble__AGC CYREG_BLE_BLERD_AGC
#define BLE_cy_m0s8_ble__BALUN CYREG_BLE_BLERD_BALUN
#define BLE_cy_m0s8_ble__BB_BUMP1 CYREG_BLE_BLERD_BB_BUMP1
#define BLE_cy_m0s8_ble__BB_BUMP2 CYREG_BLE_BLERD_BB_BUMP2
#define BLE_cy_m0s8_ble__BB_XO CYREG_BLE_BLERD_BB_XO
#define BLE_cy_m0s8_ble__BB_XO_CAPTRIM CYREG_BLE_BLERD_BB_XO_CAPTRIM
#define BLE_cy_m0s8_ble__CE_CNFG_STS_REGISTER CYREG_BLE_BLELL_CE_CNFG_STS_REGISTER
#define BLE_cy_m0s8_ble__CE_LENGTH CYREG_BLE_BLELL_CE_LENGTH
#define BLE_cy_m0s8_ble__CFG_1_FCAL CYREG_BLE_BLERD_CFG_1_FCAL
#define BLE_cy_m0s8_ble__CFG_2_FCAL CYREG_BLE_BLERD_CFG_2_FCAL
#define BLE_cy_m0s8_ble__CFG_3_FCAL CYREG_BLE_BLERD_CFG_3_FCAL
#define BLE_cy_m0s8_ble__CFG_4_FCAL CYREG_BLE_BLERD_CFG_4_FCAL
#define BLE_cy_m0s8_ble__CFG_5_FCAL CYREG_BLE_BLERD_CFG_5_FCAL
#define BLE_cy_m0s8_ble__CFG_6_FCAL CYREG_BLE_BLERD_CFG_6_FCAL
#define BLE_cy_m0s8_ble__CFG1 CYREG_BLE_BLERD_CFG1
#define BLE_cy_m0s8_ble__CFG2 CYREG_BLE_BLERD_CFG2
#define BLE_cy_m0s8_ble__CFGCTRL CYREG_BLE_BLERD_CFGCTRL
#define BLE_cy_m0s8_ble__CLOCK_CONFIG CYREG_BLE_BLELL_CLOCK_CONFIG
#define BLE_cy_m0s8_ble__COMMAND_REGISTER CYREG_BLE_BLELL_COMMAND_REGISTER
#define BLE_cy_m0s8_ble__CONN_CE_COUNTER CYREG_BLE_BLELL_CONN_CE_COUNTER
#define BLE_cy_m0s8_ble__CONN_CE_INSTANT CYREG_BLE_BLELL_CONN_CE_INSTANT
#define BLE_cy_m0s8_ble__CONN_CH_TX_POWER CYREG_BLE_BLELL_CONN_CH_TX_POWER
#define BLE_cy_m0s8_ble__CONN_CONFIG CYREG_BLE_BLELL_CONN_CONFIG
#define BLE_cy_m0s8_ble__CONN_INDEX CYREG_BLE_BLELL_CONN_INDEX
#define BLE_cy_m0s8_ble__CONN_INTERVAL CYREG_BLE_BLELL_CONN_INTERVAL
#define BLE_cy_m0s8_ble__CONN_INTR CYREG_BLE_BLELL_CONN_INTR
#define BLE_cy_m0s8_ble__CONN_INTR_MASK CYREG_BLE_BLELL_CONN_INTR_MASK
#define BLE_cy_m0s8_ble__CONN_PARAM1 CYREG_BLE_BLELL_CONN_PARAM1
#define BLE_cy_m0s8_ble__CONN_PARAM2 CYREG_BLE_BLELL_CONN_PARAM2
#define BLE_cy_m0s8_ble__CONN_REQ_WORD0 CYREG_BLE_BLELL_CONN_REQ_WORD0
#define BLE_cy_m0s8_ble__CONN_REQ_WORD1 CYREG_BLE_BLELL_CONN_REQ_WORD1
#define BLE_cy_m0s8_ble__CONN_REQ_WORD10 CYREG_BLE_BLELL_CONN_REQ_WORD10
#define BLE_cy_m0s8_ble__CONN_REQ_WORD11 CYREG_BLE_BLELL_CONN_REQ_WORD11
#define BLE_cy_m0s8_ble__CONN_REQ_WORD2 CYREG_BLE_BLELL_CONN_REQ_WORD2
#define BLE_cy_m0s8_ble__CONN_REQ_WORD3 CYREG_BLE_BLELL_CONN_REQ_WORD3
#define BLE_cy_m0s8_ble__CONN_REQ_WORD4 CYREG_BLE_BLELL_CONN_REQ_WORD4
#define BLE_cy_m0s8_ble__CONN_REQ_WORD5 CYREG_BLE_BLELL_CONN_REQ_WORD5
#define BLE_cy_m0s8_ble__CONN_REQ_WORD6 CYREG_BLE_BLELL_CONN_REQ_WORD6
#define BLE_cy_m0s8_ble__CONN_REQ_WORD7 CYREG_BLE_BLELL_CONN_REQ_WORD7
#define BLE_cy_m0s8_ble__CONN_REQ_WORD8 CYREG_BLE_BLELL_CONN_REQ_WORD8
#define BLE_cy_m0s8_ble__CONN_REQ_WORD9 CYREG_BLE_BLELL_CONN_REQ_WORD9
#define BLE_cy_m0s8_ble__CONN_RXMEM_BASE_ADDR CYREG_BLE_BLELL_CONN_RXMEM_BASE_ADDR
#define BLE_cy_m0s8_ble__CONN_STATUS CYREG_BLE_BLELL_CONN_STATUS
#define BLE_cy_m0s8_ble__CONN_TXMEM_BASE_ADDR CYREG_BLE_BLELL_CONN_TXMEM_BASE_ADDR
#define BLE_cy_m0s8_ble__CONN_UPDATE_NEW_INTERVAL CYREG_BLE_BLELL_CONN_UPDATE_NEW_INTERVAL
#define BLE_cy_m0s8_ble__CONN_UPDATE_NEW_LATENCY CYREG_BLE_BLELL_CONN_UPDATE_NEW_LATENCY
#define BLE_cy_m0s8_ble__CONN_UPDATE_NEW_SL_INTERVAL CYREG_BLE_BLELL_CONN_UPDATE_NEW_SL_INTERVAL
#define BLE_cy_m0s8_ble__CONN_UPDATE_NEW_SUP_TO CYREG_BLE_BLELL_CONN_UPDATE_NEW_SUP_TO
#define BLE_cy_m0s8_ble__CTR1 CYREG_BLE_BLERD_CTR1
#define BLE_cy_m0s8_ble__DATA_CHANNELS_H0 CYREG_BLE_BLELL_DATA_CHANNELS_H0
#define BLE_cy_m0s8_ble__DATA_CHANNELS_H1 CYREG_BLE_BLELL_DATA_CHANNELS_H1
#define BLE_cy_m0s8_ble__DATA_CHANNELS_L0 CYREG_BLE_BLELL_DATA_CHANNELS_L0
#define BLE_cy_m0s8_ble__DATA_CHANNELS_L1 CYREG_BLE_BLELL_DATA_CHANNELS_L1
#define BLE_cy_m0s8_ble__DATA_CHANNELS_M0 CYREG_BLE_BLELL_DATA_CHANNELS_M0
#define BLE_cy_m0s8_ble__DATA_CHANNELS_M1 CYREG_BLE_BLELL_DATA_CHANNELS_M1
#define BLE_cy_m0s8_ble__DATA_LIST_ACK_UPDATE__STATUS CYREG_BLE_BLELL_DATA_LIST_ACK_UPDATE__STATUS
#define BLE_cy_m0s8_ble__DATA_LIST_SENT_UPDATE__STATUS CYREG_BLE_BLELL_DATA_LIST_SENT_UPDATE__STATUS
#define BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR0 CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR0
#define BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR1 CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR1
#define BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR2 CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR2
#define BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR3 CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR3
#define BLE_cy_m0s8_ble__DATA_MEM_DESCRIPTOR4 CYREG_BLE_BLELL_DATA_MEM_DESCRIPTOR4
#define BLE_cy_m0s8_ble__DATA0 CYREG_BLE_BLELL_DATA0
#define BLE_cy_m0s8_ble__DATA1 CYREG_BLE_BLELL_DATA1
#define BLE_cy_m0s8_ble__DATA10 CYREG_BLE_BLELL_DATA10
#define BLE_cy_m0s8_ble__DATA11 CYREG_BLE_BLELL_DATA11
#define BLE_cy_m0s8_ble__DATA12 CYREG_BLE_BLELL_DATA12
#define BLE_cy_m0s8_ble__DATA13 CYREG_BLE_BLELL_DATA13
#define BLE_cy_m0s8_ble__DATA2 CYREG_BLE_BLELL_DATA2
#define BLE_cy_m0s8_ble__DATA3 CYREG_BLE_BLELL_DATA3
#define BLE_cy_m0s8_ble__DATA4 CYREG_BLE_BLELL_DATA4
#define BLE_cy_m0s8_ble__DATA5 CYREG_BLE_BLELL_DATA5
#define BLE_cy_m0s8_ble__DATA6 CYREG_BLE_BLELL_DATA6
#define BLE_cy_m0s8_ble__DATA7 CYREG_BLE_BLELL_DATA7
#define BLE_cy_m0s8_ble__DATA8 CYREG_BLE_BLELL_DATA8
#define BLE_cy_m0s8_ble__DATA9 CYREG_BLE_BLELL_DATA9
#define BLE_cy_m0s8_ble__DBG_1 CYREG_BLE_BLERD_DBG_1
#define BLE_cy_m0s8_ble__DBG_2 CYREG_BLE_BLERD_DBG_2
#define BLE_cy_m0s8_ble__DBG_3 CYREG_BLE_BLERD_DBG_3
#define BLE_cy_m0s8_ble__DBG_BB CYREG_BLE_BLERD_DBG_BB
#define BLE_cy_m0s8_ble__DBUS CYREG_BLE_BLERD_DBUS
#define BLE_cy_m0s8_ble__DC CYREG_BLE_BLERD_DC
#define BLE_cy_m0s8_ble__DCCAL CYREG_BLE_BLERD_DCCAL
#define BLE_cy_m0s8_ble__DEV_PUB_ADDR_H CYREG_BLE_BLELL_DEV_PUB_ADDR_H
#define BLE_cy_m0s8_ble__DEV_PUB_ADDR_L CYREG_BLE_BLELL_DEV_PUB_ADDR_L
#define BLE_cy_m0s8_ble__DEV_PUB_ADDR_M CYREG_BLE_BLELL_DEV_PUB_ADDR_M
#define BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_H CYREG_BLE_BLELL_DEVICE_RAND_ADDR_H
#define BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_L CYREG_BLE_BLELL_DEVICE_RAND_ADDR_L
#define BLE_cy_m0s8_ble__DEVICE_RAND_ADDR_M CYREG_BLE_BLELL_DEVICE_RAND_ADDR_M
#define BLE_cy_m0s8_ble__DIAG1 CYREG_BLE_BLERD_DIAG1
#define BLE_cy_m0s8_ble__DPLL_CONFIG CYREG_BLE_BLELL_DPLL_CONFIG
#define BLE_cy_m0s8_ble__DSM1 CYREG_BLE_BLERD_DSM1
#define BLE_cy_m0s8_ble__DSM2 CYREG_BLE_BLERD_DSM2
#define BLE_cy_m0s8_ble__DSM3 CYREG_BLE_BLERD_DSM3
#define BLE_cy_m0s8_ble__DSM4 CYREG_BLE_BLERD_DSM4
#define BLE_cy_m0s8_ble__DSM5 CYREG_BLE_BLERD_DSM5
#define BLE_cy_m0s8_ble__DSM6 CYREG_BLE_BLERD_DSM6
#define BLE_cy_m0s8_ble__DTM_RX_PKT_COUNT CYREG_BLE_BLELL_DTM_RX_PKT_COUNT
#define BLE_cy_m0s8_ble__ENC_CONFIG CYREG_BLE_BLELL_ENC_CONFIG
#define BLE_cy_m0s8_ble__ENC_INTR CYREG_BLE_BLELL_ENC_INTR
#define BLE_cy_m0s8_ble__ENC_INTR_EN CYREG_BLE_BLELL_ENC_INTR_EN
#define BLE_cy_m0s8_ble__ENC_KEY0 CYREG_BLE_BLELL_ENC_KEY0
#define BLE_cy_m0s8_ble__ENC_KEY1 CYREG_BLE_BLELL_ENC_KEY1
#define BLE_cy_m0s8_ble__ENC_KEY2 CYREG_BLE_BLELL_ENC_KEY2
#define BLE_cy_m0s8_ble__ENC_KEY3 CYREG_BLE_BLELL_ENC_KEY3
#define BLE_cy_m0s8_ble__ENC_KEY4 CYREG_BLE_BLELL_ENC_KEY4
#define BLE_cy_m0s8_ble__ENC_KEY5 CYREG_BLE_BLELL_ENC_KEY5
#define BLE_cy_m0s8_ble__ENC_KEY6 CYREG_BLE_BLELL_ENC_KEY6
#define BLE_cy_m0s8_ble__ENC_KEY7 CYREG_BLE_BLELL_ENC_KEY7
#define BLE_cy_m0s8_ble__ENC_PARAMS CYREG_BLE_BLELL_ENC_PARAMS
#define BLE_cy_m0s8_ble__EVENT_ENABLE CYREG_BLE_BLELL_EVENT_ENABLE
#define BLE_cy_m0s8_ble__EVENT_INTR CYREG_BLE_BLELL_EVENT_INTR
#define BLE_cy_m0s8_ble__FCAL_TEST CYREG_BLE_BLERD_FCAL_TEST
#define BLE_cy_m0s8_ble__FPD_TEST CYREG_BLE_BLERD_FPD_TEST
#define BLE_cy_m0s8_ble__FSM CYREG_BLE_BLERD_FSM
#define BLE_cy_m0s8_ble__IM CYREG_BLE_BLERD_IM
#define BLE_cy_m0s8_ble__INIT_CONFIG CYREG_BLE_BLELL_INIT_CONFIG
#define BLE_cy_m0s8_ble__INIT_INTERVAL CYREG_BLE_BLELL_INIT_INTERVAL
#define BLE_cy_m0s8_ble__INIT_INTR CYREG_BLE_BLELL_INIT_INTR
#define BLE_cy_m0s8_ble__INIT_NEXT_INSTANT CYREG_BLE_BLELL_INIT_NEXT_INSTANT
#define BLE_cy_m0s8_ble__INIT_PARAM CYREG_BLE_BLELL_INIT_PARAM
#define BLE_cy_m0s8_ble__INIT_SCN_ADV_RX_FIFO CYREG_BLE_BLELL_INIT_SCN_ADV_RX_FIFO
#define BLE_cy_m0s8_ble__INIT_WINDOW CYREG_BLE_BLELL_INIT_WINDOW
#define BLE_cy_m0s8_ble__IQMIS CYREG_BLE_BLERD_IQMIS
#define BLE_cy_m0s8_ble__IV_MASTER0 CYREG_BLE_BLELL_IV_MASTER0
#define BLE_cy_m0s8_ble__IV_MASTER1 CYREG_BLE_BLELL_IV_MASTER1
#define BLE_cy_m0s8_ble__IV_SLAVE0 CYREG_BLE_BLELL_IV_SLAVE0
#define BLE_cy_m0s8_ble__IV_SLAVE1 CYREG_BLE_BLELL_IV_SLAVE1
#define BLE_cy_m0s8_ble__KVCAL CYREG_BLE_BLERD_KVCAL
#define BLE_cy_m0s8_ble__LDO CYREG_BLE_BLERD_LDO
#define BLE_cy_m0s8_ble__LDO_BYPASS CYREG_BLE_BLERD_LDO_BYPASS
#define BLE_cy_m0s8_ble__LE_PING_TIMER_ADDR CYREG_BLE_BLELL_LE_PING_TIMER_ADDR
#define BLE_cy_m0s8_ble__LE_PING_TIMER_NEXT_EXP CYREG_BLE_BLELL_LE_PING_TIMER_NEXT_EXP
#define BLE_cy_m0s8_ble__LE_PING_TIMER_OFFSET CYREG_BLE_BLELL_LE_PING_TIMER_OFFSET
#define BLE_cy_m0s8_ble__LE_PING_TIMER_WRAP_COUNT CYREG_BLE_BLELL_LE_PING_TIMER_WRAP_COUNT
#define BLE_cy_m0s8_ble__LE_RF_TEST_MODE CYREG_BLE_BLELL_LE_RF_TEST_MODE
#define BLE_cy_m0s8_ble__LF_CLK_CTRL CYREG_BLE_BLESS_LF_CLK_CTRL
#define BLE_cy_m0s8_ble__LL_CLK_EN CYREG_BLE_BLESS_LL_CLK_EN
#define BLE_cy_m0s8_ble__LL_DSM_CTRL CYREG_BLE_BLESS_LL_DSM_CTRL
#define BLE_cy_m0s8_ble__LL_DSM_INTR_STAT CYREG_BLE_BLESS_LL_DSM_INTR_STAT
#define BLE_cy_m0s8_ble__LLH_FEATURE_CONFIG CYREG_BLE_BLELL_LLH_FEATURE_CONFIG
#define BLE_cy_m0s8_ble__MIC_IN0 CYREG_BLE_BLELL_MIC_IN0
#define BLE_cy_m0s8_ble__MIC_IN1 CYREG_BLE_BLELL_MIC_IN1
#define BLE_cy_m0s8_ble__MIC_OUT0 CYREG_BLE_BLELL_MIC_OUT0
#define BLE_cy_m0s8_ble__MIC_OUT1 CYREG_BLE_BLELL_MIC_OUT1
#define BLE_cy_m0s8_ble__MODEM CYREG_BLE_BLERD_MODEM
#define BLE_cy_m0s8_ble__MONI CYREG_BLE_BLERD_MONI
#define BLE_cy_m0s8_ble__NEXT_CE_INSTANT CYREG_BLE_BLELL_NEXT_CE_INSTANT
#define BLE_cy_m0s8_ble__NEXT_RESP_TIMER_EXP CYREG_BLE_BLELL_NEXT_RESP_TIMER_EXP
#define BLE_cy_m0s8_ble__NEXT_SUP_TO CYREG_BLE_BLELL_NEXT_SUP_TO
#define BLE_cy_m0s8_ble__OFFSET_TO_FIRST_INSTANT CYREG_BLE_BLELL_OFFSET_TO_FIRST_INSTANT
#define BLE_cy_m0s8_ble__PACKET_COUNTER0 CYREG_BLE_BLELL_PACKET_COUNTER0
#define BLE_cy_m0s8_ble__PACKET_COUNTER1 CYREG_BLE_BLELL_PACKET_COUNTER1
#define BLE_cy_m0s8_ble__PACKET_COUNTER2 CYREG_BLE_BLELL_PACKET_COUNTER2
#define BLE_cy_m0s8_ble__PDU_ACCESS_ADDR_H_REGISTER CYREG_BLE_BLELL_PDU_ACCESS_ADDR_H_REGISTER
#define BLE_cy_m0s8_ble__PDU_ACCESS_ADDR_L_REGISTER CYREG_BLE_BLELL_PDU_ACCESS_ADDR_L_REGISTER
#define BLE_cy_m0s8_ble__PDU_RESP_TIMER CYREG_BLE_BLELL_PDU_RESP_TIMER
#define BLE_cy_m0s8_ble__PEER_ADDR_H CYREG_BLE_BLELL_PEER_ADDR_H
#define BLE_cy_m0s8_ble__PEER_ADDR_L CYREG_BLE_BLELL_PEER_ADDR_L
#define BLE_cy_m0s8_ble__PEER_ADDR_M CYREG_BLE_BLELL_PEER_ADDR_M
#define BLE_cy_m0s8_ble__POC_REG__TIM_CONTROL CYREG_BLE_BLELL_POC_REG__TIM_CONTROL
#define BLE_cy_m0s8_ble__RCCAL CYREG_BLE_BLERD_RCCAL
#define BLE_cy_m0s8_ble__READ_IQ_1 CYREG_BLE_BLERD_READ_IQ_1
#define BLE_cy_m0s8_ble__READ_IQ_2 CYREG_BLE_BLERD_READ_IQ_2
#define BLE_cy_m0s8_ble__READ_IQ_3 CYREG_BLE_BLERD_READ_IQ_3
#define BLE_cy_m0s8_ble__READ_IQ_4 CYREG_BLE_BLERD_READ_IQ_4
#define BLE_cy_m0s8_ble__RECEIVE_TRIG_CTRL CYREG_BLE_BLELL_RECEIVE_TRIG_CTRL
#define BLE_cy_m0s8_ble__RF_CONFIG CYREG_BLE_BLESS_RF_CONFIG
#define BLE_cy_m0s8_ble__RMAP CYREG_BLE_BLERD_RMAP
#define BLE_cy_m0s8_ble__RSSI CYREG_BLE_BLERD_RSSI
#define BLE_cy_m0s8_ble__RX CYREG_BLE_BLERD_RX
#define BLE_cy_m0s8_ble__RX_BUMP1 CYREG_BLE_BLERD_RX_BUMP1
#define BLE_cy_m0s8_ble__RX_BUMP2 CYREG_BLE_BLERD_RX_BUMP2
#define BLE_cy_m0s8_ble__SCAN_CONFIG CYREG_BLE_BLELL_SCAN_CONFIG
#define BLE_cy_m0s8_ble__SCAN_INTERVAL CYREG_BLE_BLELL_SCAN_INTERVAL
#define BLE_cy_m0s8_ble__SCAN_INTR CYREG_BLE_BLELL_SCAN_INTR
#define BLE_cy_m0s8_ble__SCAN_NEXT_INSTANT CYREG_BLE_BLELL_SCAN_NEXT_INSTANT
#define BLE_cy_m0s8_ble__SCAN_PARAM CYREG_BLE_BLELL_SCAN_PARAM
#define BLE_cy_m0s8_ble__SCAN_WINDOW CYREG_BLE_BLELL_SCAN_WINDOW
#define BLE_cy_m0s8_ble__SL_CONN_INTERVAL CYREG_BLE_BLELL_SL_CONN_INTERVAL
#define BLE_cy_m0s8_ble__SLAVE_LATENCY CYREG_BLE_BLELL_SLAVE_LATENCY
#define BLE_cy_m0s8_ble__SLAVE_TIMING_CONTROL CYREG_BLE_BLELL_SLAVE_TIMING_CONTROL
#define BLE_cy_m0s8_ble__SLV_WIN_ADJ CYREG_BLE_BLELL_SLV_WIN_ADJ
#define BLE_cy_m0s8_ble__SUP_TIMEOUT CYREG_BLE_BLELL_SUP_TIMEOUT
#define BLE_cy_m0s8_ble__SY CYREG_BLE_BLERD_SY
#define BLE_cy_m0s8_ble__SY_BUMP1 CYREG_BLE_BLERD_SY_BUMP1
#define BLE_cy_m0s8_ble__SY_BUMP2 CYREG_BLE_BLERD_SY_BUMP2
#define BLE_cy_m0s8_ble__TEST CYREG_BLE_BLERD_TEST
#define BLE_cy_m0s8_ble__TEST2_SY CYREG_BLE_BLERD_TEST2_SY
#define BLE_cy_m0s8_ble__THRSHD1 CYREG_BLE_BLERD_THRSHD1
#define BLE_cy_m0s8_ble__THRSHD2 CYREG_BLE_BLERD_THRSHD2
#define BLE_cy_m0s8_ble__THRSHD3 CYREG_BLE_BLERD_THRSHD3
#define BLE_cy_m0s8_ble__THRSHD4 CYREG_BLE_BLERD_THRSHD4
#define BLE_cy_m0s8_ble__THRSHD5 CYREG_BLE_BLERD_THRSHD5
#define BLE_cy_m0s8_ble__TIM_COUNTER_L CYREG_BLE_BLELL_TIM_COUNTER_L
#define BLE_cy_m0s8_ble__TRANSMIT_WINDOW_OFFSET CYREG_BLE_BLELL_TRANSMIT_WINDOW_OFFSET
#define BLE_cy_m0s8_ble__TRANSMIT_WINDOW_SIZE CYREG_BLE_BLELL_TRANSMIT_WINDOW_SIZE
#define BLE_cy_m0s8_ble__TX CYREG_BLE_BLERD_TX
#define BLE_cy_m0s8_ble__TX_BUMP1 CYREG_BLE_BLERD_TX_BUMP1
#define BLE_cy_m0s8_ble__TX_BUMP2 CYREG_BLE_BLERD_TX_BUMP2
#define BLE_cy_m0s8_ble__TX_EN_EXT_DELAY CYREG_BLE_BLELL_TX_EN_EXT_DELAY
#define BLE_cy_m0s8_ble__TX_RX_ON_DELAY CYREG_BLE_BLELL_TX_RX_ON_DELAY
#define BLE_cy_m0s8_ble__TX_RX_SYNTH_DELAY CYREG_BLE_BLELL_TX_RX_SYNTH_DELAY
#define BLE_cy_m0s8_ble__TXRX_HOP CYREG_BLE_BLELL_TXRX_HOP
#define BLE_cy_m0s8_ble__WAKEUP_CONFIG CYREG_BLE_BLELL_WAKEUP_CONFIG
#define BLE_cy_m0s8_ble__WAKEUP_CONTROL CYREG_BLE_BLELL_WAKEUP_CONTROL
#define BLE_cy_m0s8_ble__WCO_CONFIG CYREG_BLE_BLESS_WCO_CONFIG
#define BLE_cy_m0s8_ble__WCO_STATUS CYREG_BLE_BLESS_WCO_STATUS
#define BLE_cy_m0s8_ble__WCO_TRIM CYREG_BLE_BLESS_WCO_TRIM
#define BLE_cy_m0s8_ble__WHITELIST_BASE_ADDR CYREG_BLE_BLELL_WHITELIST_BASE_ADDR
#define BLE_cy_m0s8_ble__WIN_MIN_STEP_SIZE CYREG_BLE_BLELL_WIN_MIN_STEP_SIZE
#define BLE_cy_m0s8_ble__WINDOW_WIDEN_INTVL CYREG_BLE_BLELL_WINDOW_WIDEN_INTVL
#define BLE_cy_m0s8_ble__WINDOW_WIDEN_WINOFF CYREG_BLE_BLELL_WINDOW_WIDEN_WINOFF
#define BLE_cy_m0s8_ble__WL_ADDR_TYPE CYREG_BLE_BLELL_WL_ADDR_TYPE
#define BLE_cy_m0s8_ble__WL_ENABLE CYREG_BLE_BLELL_WL_ENABLE
#define BLE_cy_m0s8_ble__XTAL_CLK_DIV_CONFIG CYREG_BLE_BLESS_XTAL_CLK_DIV_CONFIG

/* Conn_LED */
#define Conn_LED__0__DR CYREG_GPIO_PRT3_DR
#define Conn_LED__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Conn_LED__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Conn_LED__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Conn_LED__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Conn_LED__0__HSIOM_MASK 0x0000F000u
#define Conn_LED__0__HSIOM_SHIFT 12u
#define Conn_LED__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Conn_LED__0__INTR CYREG_GPIO_PRT3_INTR
#define Conn_LED__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Conn_LED__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define Conn_LED__0__MASK 0x08u
#define Conn_LED__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Conn_LED__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Conn_LED__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Conn_LED__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Conn_LED__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Conn_LED__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Conn_LED__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Conn_LED__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Conn_LED__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Conn_LED__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Conn_LED__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Conn_LED__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Conn_LED__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Conn_LED__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Conn_LED__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Conn_LED__0__PC CYREG_GPIO_PRT3_PC
#define Conn_LED__0__PC2 CYREG_GPIO_PRT3_PC2
#define Conn_LED__0__PORT 3u
#define Conn_LED__0__PS CYREG_GPIO_PRT3_PS
#define Conn_LED__0__SHIFT 3u
#define Conn_LED__DR CYREG_GPIO_PRT3_DR
#define Conn_LED__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define Conn_LED__DR_INV CYREG_GPIO_PRT3_DR_INV
#define Conn_LED__DR_SET CYREG_GPIO_PRT3_DR_SET
#define Conn_LED__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define Conn_LED__INTR CYREG_GPIO_PRT3_INTR
#define Conn_LED__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define Conn_LED__INTSTAT CYREG_GPIO_PRT3_INTR
#define Conn_LED__MASK 0x08u
#define Conn_LED__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Conn_LED__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Conn_LED__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Conn_LED__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Conn_LED__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Conn_LED__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Conn_LED__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Conn_LED__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Conn_LED__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Conn_LED__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Conn_LED__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Conn_LED__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Conn_LED__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Conn_LED__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Conn_LED__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Conn_LED__PC CYREG_GPIO_PRT3_PC
#define Conn_LED__PC2 CYREG_GPIO_PRT3_PC2
#define Conn_LED__PORT 3u
#define Conn_LED__PS CYREG_GPIO_PRT3_PS
#define Conn_LED__SHIFT 3u

/* UART */
#define UART_rx__0__DR CYREG_GPIO_PRT1_DR
#define UART_rx__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define UART_rx__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define UART_rx__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define UART_rx__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define UART_rx__0__HSIOM_GPIO 0u
#define UART_rx__0__HSIOM_I2C 14u
#define UART_rx__0__HSIOM_I2C_SDA 14u
#define UART_rx__0__HSIOM_MASK 0x000F0000u
#define UART_rx__0__HSIOM_SHIFT 16u
#define UART_rx__0__HSIOM_SPI 15u
#define UART_rx__0__HSIOM_SPI_MOSI 15u
#define UART_rx__0__HSIOM_UART 9u
#define UART_rx__0__HSIOM_UART_RX 9u
#define UART_rx__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_rx__0__INTR CYREG_GPIO_PRT1_INTR
#define UART_rx__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_rx__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define UART_rx__0__MASK 0x10u
#define UART_rx__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define UART_rx__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define UART_rx__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define UART_rx__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define UART_rx__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define UART_rx__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define UART_rx__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define UART_rx__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define UART_rx__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define UART_rx__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define UART_rx__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define UART_rx__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define UART_rx__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define UART_rx__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define UART_rx__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define UART_rx__0__PC CYREG_GPIO_PRT1_PC
#define UART_rx__0__PC2 CYREG_GPIO_PRT1_PC2
#define UART_rx__0__PORT 1u
#define UART_rx__0__PS CYREG_GPIO_PRT1_PS
#define UART_rx__0__SHIFT 4u
#define UART_rx__DR CYREG_GPIO_PRT1_DR
#define UART_rx__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define UART_rx__DR_INV CYREG_GPIO_PRT1_DR_INV
#define UART_rx__DR_SET CYREG_GPIO_PRT1_DR_SET
#define UART_rx__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_rx__INTR CYREG_GPIO_PRT1_INTR
#define UART_rx__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_rx__INTSTAT CYREG_GPIO_PRT1_INTR
#define UART_rx__MASK 0x10u
#define UART_rx__PA__CFG0 CYREG_UDB_PA1_CFG0
#define UART_rx__PA__CFG1 CYREG_UDB_PA1_CFG1
#define UART_rx__PA__CFG10 CYREG_UDB_PA1_CFG10
#define UART_rx__PA__CFG11 CYREG_UDB_PA1_CFG11
#define UART_rx__PA__CFG12 CYREG_UDB_PA1_CFG12
#define UART_rx__PA__CFG13 CYREG_UDB_PA1_CFG13
#define UART_rx__PA__CFG14 CYREG_UDB_PA1_CFG14
#define UART_rx__PA__CFG2 CYREG_UDB_PA1_CFG2
#define UART_rx__PA__CFG3 CYREG_UDB_PA1_CFG3
#define UART_rx__PA__CFG4 CYREG_UDB_PA1_CFG4
#define UART_rx__PA__CFG5 CYREG_UDB_PA1_CFG5
#define UART_rx__PA__CFG6 CYREG_UDB_PA1_CFG6
#define UART_rx__PA__CFG7 CYREG_UDB_PA1_CFG7
#define UART_rx__PA__CFG8 CYREG_UDB_PA1_CFG8
#define UART_rx__PA__CFG9 CYREG_UDB_PA1_CFG9
#define UART_rx__PC CYREG_GPIO_PRT1_PC
#define UART_rx__PC2 CYREG_GPIO_PRT1_PC2
#define UART_rx__PORT 1u
#define UART_rx__PS CYREG_GPIO_PRT1_PS
#define UART_rx__SHIFT 4u
#define UART_SCB__CTRL CYREG_SCB0_CTRL
#define UART_SCB__EZ_DATA0 CYREG_SCB0_EZ_DATA0
#define UART_SCB__EZ_DATA1 CYREG_SCB0_EZ_DATA1
#define UART_SCB__EZ_DATA10 CYREG_SCB0_EZ_DATA10
#define UART_SCB__EZ_DATA11 CYREG_SCB0_EZ_DATA11
#define UART_SCB__EZ_DATA12 CYREG_SCB0_EZ_DATA12
#define UART_SCB__EZ_DATA13 CYREG_SCB0_EZ_DATA13
#define UART_SCB__EZ_DATA14 CYREG_SCB0_EZ_DATA14
#define UART_SCB__EZ_DATA15 CYREG_SCB0_EZ_DATA15
#define UART_SCB__EZ_DATA16 CYREG_SCB0_EZ_DATA16
#define UART_SCB__EZ_DATA17 CYREG_SCB0_EZ_DATA17
#define UART_SCB__EZ_DATA18 CYREG_SCB0_EZ_DATA18
#define UART_SCB__EZ_DATA19 CYREG_SCB0_EZ_DATA19
#define UART_SCB__EZ_DATA2 CYREG_SCB0_EZ_DATA2
#define UART_SCB__EZ_DATA20 CYREG_SCB0_EZ_DATA20
#define UART_SCB__EZ_DATA21 CYREG_SCB0_EZ_DATA21
#define UART_SCB__EZ_DATA22 CYREG_SCB0_EZ_DATA22
#define UART_SCB__EZ_DATA23 CYREG_SCB0_EZ_DATA23
#define UART_SCB__EZ_DATA24 CYREG_SCB0_EZ_DATA24
#define UART_SCB__EZ_DATA25 CYREG_SCB0_EZ_DATA25
#define UART_SCB__EZ_DATA26 CYREG_SCB0_EZ_DATA26
#define UART_SCB__EZ_DATA27 CYREG_SCB0_EZ_DATA27
#define UART_SCB__EZ_DATA28 CYREG_SCB0_EZ_DATA28
#define UART_SCB__EZ_DATA29 CYREG_SCB0_EZ_DATA29
#define UART_SCB__EZ_DATA3 CYREG_SCB0_EZ_DATA3
#define UART_SCB__EZ_DATA30 CYREG_SCB0_EZ_DATA30
#define UART_SCB__EZ_DATA31 CYREG_SCB0_EZ_DATA31
#define UART_SCB__EZ_DATA4 CYREG_SCB0_EZ_DATA4
#define UART_SCB__EZ_DATA5 CYREG_SCB0_EZ_DATA5
#define UART_SCB__EZ_DATA6 CYREG_SCB0_EZ_DATA6
#define UART_SCB__EZ_DATA7 CYREG_SCB0_EZ_DATA7
#define UART_SCB__EZ_DATA8 CYREG_SCB0_EZ_DATA8
#define UART_SCB__EZ_DATA9 CYREG_SCB0_EZ_DATA9
#define UART_SCB__I2C_CFG CYREG_SCB0_I2C_CFG
#define UART_SCB__I2C_CTRL CYREG_SCB0_I2C_CTRL
#define UART_SCB__I2C_M_CMD CYREG_SCB0_I2C_M_CMD
#define UART_SCB__I2C_S_CMD CYREG_SCB0_I2C_S_CMD
#define UART_SCB__I2C_STATUS CYREG_SCB0_I2C_STATUS
#define UART_SCB__INTR_CAUSE CYREG_SCB0_INTR_CAUSE
#define UART_SCB__INTR_I2C_EC CYREG_SCB0_INTR_I2C_EC
#define UART_SCB__INTR_I2C_EC_MASK CYREG_SCB0_INTR_I2C_EC_MASK
#define UART_SCB__INTR_I2C_EC_MASKED CYREG_SCB0_INTR_I2C_EC_MASKED
#define UART_SCB__INTR_M CYREG_SCB0_INTR_M
#define UART_SCB__INTR_M_MASK CYREG_SCB0_INTR_M_MASK
#define UART_SCB__INTR_M_MASKED CYREG_SCB0_INTR_M_MASKED
#define UART_SCB__INTR_M_SET CYREG_SCB0_INTR_M_SET
#define UART_SCB__INTR_RX CYREG_SCB0_INTR_RX
#define UART_SCB__INTR_RX_MASK CYREG_SCB0_INTR_RX_MASK
#define UART_SCB__INTR_RX_MASKED CYREG_SCB0_INTR_RX_MASKED
#define UART_SCB__INTR_RX_SET CYREG_SCB0_INTR_RX_SET
#define UART_SCB__INTR_S CYREG_SCB0_INTR_S
#define UART_SCB__INTR_S_MASK CYREG_SCB0_INTR_S_MASK
#define UART_SCB__INTR_S_MASKED CYREG_SCB0_INTR_S_MASKED
#define UART_SCB__INTR_S_SET CYREG_SCB0_INTR_S_SET
#define UART_SCB__INTR_SPI_EC CYREG_SCB0_INTR_SPI_EC
#define UART_SCB__INTR_SPI_EC_MASK CYREG_SCB0_INTR_SPI_EC_MASK
#define UART_SCB__INTR_SPI_EC_MASKED CYREG_SCB0_INTR_SPI_EC_MASKED
#define UART_SCB__INTR_TX CYREG_SCB0_INTR_TX
#define UART_SCB__INTR_TX_MASK CYREG_SCB0_INTR_TX_MASK
#define UART_SCB__INTR_TX_MASKED CYREG_SCB0_INTR_TX_MASKED
#define UART_SCB__INTR_TX_SET CYREG_SCB0_INTR_TX_SET
#define UART_SCB__RX_CTRL CYREG_SCB0_RX_CTRL
#define UART_SCB__RX_FIFO_CTRL CYREG_SCB0_RX_FIFO_CTRL
#define UART_SCB__RX_FIFO_RD CYREG_SCB0_RX_FIFO_RD
#define UART_SCB__RX_FIFO_RD_SILENT CYREG_SCB0_RX_FIFO_RD_SILENT
#define UART_SCB__RX_FIFO_STATUS CYREG_SCB0_RX_FIFO_STATUS
#define UART_SCB__RX_MATCH CYREG_SCB0_RX_MATCH
#define UART_SCB__SPI_CTRL CYREG_SCB0_SPI_CTRL
#define UART_SCB__SPI_STATUS CYREG_SCB0_SPI_STATUS
#define UART_SCB__SS0_POSISTION 0u
#define UART_SCB__SS1_POSISTION 1u
#define UART_SCB__SS2_POSISTION 2u
#define UART_SCB__SS3_POSISTION 3u
#define UART_SCB__STATUS CYREG_SCB0_STATUS
#define UART_SCB__TX_CTRL CYREG_SCB0_TX_CTRL
#define UART_SCB__TX_FIFO_CTRL CYREG_SCB0_TX_FIFO_CTRL
#define UART_SCB__TX_FIFO_STATUS CYREG_SCB0_TX_FIFO_STATUS
#define UART_SCB__TX_FIFO_WR CYREG_SCB0_TX_FIFO_WR
#define UART_SCB__UART_CTRL CYREG_SCB0_UART_CTRL
#define UART_SCB__UART_FLOW_CTRL CYREG_SCB0_UART_FLOW_CTRL
#define UART_SCB__UART_RX_CTRL CYREG_SCB0_UART_RX_CTRL
#define UART_SCB__UART_RX_STATUS CYREG_SCB0_UART_RX_STATUS
#define UART_SCB__UART_TX_CTRL CYREG_SCB0_UART_TX_CTRL
#define UART_SCB_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define UART_SCB_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define UART_SCB_IRQ__INTC_MASK 0x200u
#define UART_SCB_IRQ__INTC_NUMBER 9u
#define UART_SCB_IRQ__INTC_PRIOR_MASK 0xC000u
#define UART_SCB_IRQ__INTC_PRIOR_NUM 3u
#define UART_SCB_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR2
#define UART_SCB_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define UART_SCB_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR
#define UART_SCBCLK__CTRL_REGISTER CYREG_PERI_PCLK_CTL1
#define UART_SCBCLK__DIV_ID 0x00000040u
#define UART_SCBCLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define UART_SCBCLK__PA_DIV_ID 0x000000FFu
#define UART_tx__0__DR CYREG_GPIO_PRT1_DR
#define UART_tx__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define UART_tx__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define UART_tx__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define UART_tx__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define UART_tx__0__HSIOM_GPIO 0u
#define UART_tx__0__HSIOM_I2C 14u
#define UART_tx__0__HSIOM_I2C_SCL 14u
#define UART_tx__0__HSIOM_MASK 0x00F00000u
#define UART_tx__0__HSIOM_SHIFT 20u
#define UART_tx__0__HSIOM_SPI 15u
#define UART_tx__0__HSIOM_SPI_MISO 15u
#define UART_tx__0__HSIOM_UART 9u
#define UART_tx__0__HSIOM_UART_TX 9u
#define UART_tx__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_tx__0__INTR CYREG_GPIO_PRT1_INTR
#define UART_tx__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_tx__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define UART_tx__0__MASK 0x20u
#define UART_tx__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define UART_tx__0__OUT_SEL_SHIFT 10u
#define UART_tx__0__OUT_SEL_VAL -1u
#define UART_tx__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define UART_tx__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define UART_tx__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define UART_tx__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define UART_tx__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define UART_tx__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define UART_tx__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define UART_tx__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define UART_tx__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define UART_tx__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define UART_tx__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define UART_tx__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define UART_tx__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define UART_tx__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define UART_tx__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define UART_tx__0__PC CYREG_GPIO_PRT1_PC
#define UART_tx__0__PC2 CYREG_GPIO_PRT1_PC2
#define UART_tx__0__PORT 1u
#define UART_tx__0__PS CYREG_GPIO_PRT1_PS
#define UART_tx__0__SHIFT 5u
#define UART_tx__DR CYREG_GPIO_PRT1_DR
#define UART_tx__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define UART_tx__DR_INV CYREG_GPIO_PRT1_DR_INV
#define UART_tx__DR_SET CYREG_GPIO_PRT1_DR_SET
#define UART_tx__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_tx__INTR CYREG_GPIO_PRT1_INTR
#define UART_tx__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define UART_tx__INTSTAT CYREG_GPIO_PRT1_INTR
#define UART_tx__MASK 0x20u
#define UART_tx__PA__CFG0 CYREG_UDB_PA1_CFG0
#define UART_tx__PA__CFG1 CYREG_UDB_PA1_CFG1
#define UART_tx__PA__CFG10 CYREG_UDB_PA1_CFG10
#define UART_tx__PA__CFG11 CYREG_UDB_PA1_CFG11
#define UART_tx__PA__CFG12 CYREG_UDB_PA1_CFG12
#define UART_tx__PA__CFG13 CYREG_UDB_PA1_CFG13
#define UART_tx__PA__CFG14 CYREG_UDB_PA1_CFG14
#define UART_tx__PA__CFG2 CYREG_UDB_PA1_CFG2
#define UART_tx__PA__CFG3 CYREG_UDB_PA1_CFG3
#define UART_tx__PA__CFG4 CYREG_UDB_PA1_CFG4
#define UART_tx__PA__CFG5 CYREG_UDB_PA1_CFG5
#define UART_tx__PA__CFG6 CYREG_UDB_PA1_CFG6
#define UART_tx__PA__CFG7 CYREG_UDB_PA1_CFG7
#define UART_tx__PA__CFG8 CYREG_UDB_PA1_CFG8
#define UART_tx__PA__CFG9 CYREG_UDB_PA1_CFG9
#define UART_tx__PC CYREG_GPIO_PRT1_PC
#define UART_tx__PC2 CYREG_GPIO_PRT1_PC2
#define UART_tx__PORT 1u
#define UART_tx__PS CYREG_GPIO_PRT1_PS
#define UART_tx__SHIFT 5u

/* Miscellaneous */
#define CY_PROJECT_NAME "UART_to_BLE_peripheral_test"
#define CY_VERSION "PSoC Creator  4.1 Update 1"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 16u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x0E34119Eu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 16u
#define CYDEV_CHIP_MEMBER_4D 12u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 17u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 15u
#define CYDEV_CHIP_MEMBER_4I 21u
#define CYDEV_CHIP_MEMBER_4J 13u
#define CYDEV_CHIP_MEMBER_4K 14u
#define CYDEV_CHIP_MEMBER_4L 20u
#define CYDEV_CHIP_MEMBER_4M 19u
#define CYDEV_CHIP_MEMBER_4N 9u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 18u
#define CYDEV_CHIP_MEMBER_4Q 11u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 22u
#define CYDEV_CHIP_MEMBER_FM3 26u
#define CYDEV_CHIP_MEMBER_FM4 27u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 23u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 24u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 25u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 0u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 10u
#define CYDEV_DFT_SELECT_CLK1 11u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYDEV_WDT_GENERATE_ISR 0u
#define CYIPBLOCK_m0s8bless_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
