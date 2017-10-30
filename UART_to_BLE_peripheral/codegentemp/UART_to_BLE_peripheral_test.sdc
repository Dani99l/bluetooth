# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\Daniela\Desktop\Bluetooth_Project\UART_to_BLE_peripheral_test.cydsn\UART_to_BLE_peripheral_test.cyprj
# Date: Mon, 30 Oct 2017 09:17:37 GMT
#set_units -time ns
create_clock -name {UART_SCBCLK(FFB)} -period 541.66666666666663 -waveform {0 270.833333333333} [list [get_pins {ClockBlock/ff_div_1}]]
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyWCO} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/wco}]]
create_clock -name {CyLFCLK} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyECO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/eco}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFCLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySYSCLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {UART_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 27 53} -nominal_period 541.66666666666663 [list]


# Component constraints for C:\Users\Daniela\Desktop\Bluetooth_Project\UART_to_BLE_peripheral_test.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Daniela\Desktop\Bluetooth_Project\UART_to_BLE_peripheral_test.cydsn\UART_to_BLE_peripheral_test.cyprj
# Date: Mon, 30 Oct 2017 09:17:16 GMT