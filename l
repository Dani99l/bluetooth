[33mcommit 9440585a2790b8d971bbda54f96b10201b00ad76[m
Author: Daniela Lourenco <danielaflourenco@ua.pt>
Date:   Mon Oct 30 09:29:58 2017 +0000

    update code periferical

[1mdiff --git a/UART_to_BLE_central/UART_to_BLE_central.cydsn/BUILD.log b/UART_to_BLE_central/UART_to_BLE_central.cydsn/BUILD.log[m
[1mindex e846fd4..115b9b7 100644[m
[1m--- a/UART_to_BLE_central/UART_to_BLE_central.cydsn/BUILD.log[m
[1m+++ b/UART_to_BLE_central/UART_to_BLE_central.cydsn/BUILD.log[m
[36m@@ -1,11 +1,11 @@[m
[31m---------------- Build Started: 10/25/2017 15:03:25 Project: UART_to_BLE_central, Configuration: ARM GCC 5.4-2016-q2-update Debug ---------------[m
[32m+[m[32m--------------- Build Started: 10/27/2017 13:59:08 Project: UART_to_BLE_central, Configuration: ARM GCC 5.4-2016-q2-update Debug ---------------[m
 The code generation step is up to date.[m
[31m-arm-none-eabi-gcc.exe -mcpu=cortex-m0 -mthumb -I. -IGenerated_Source\PSoC4 -Wa,-alh=.\CortexM0\ARM_GCC_541\Debug/app_Ble.lst -g -D DEBUG -Wall -ffunction-sections -ffat-lto-objects -O0 -c app_Ble.c -o .\CortexM0\ARM_GCC_541\Debug\app_Ble.o[m
[32m+[m[32marm-none-eabi-gcc.exe -mcpu=cortex-m0 -mthumb -I. -IGenerated_Source\PSoC4 -Wa,-alh=.\CortexM0\ARM_GCC_541\Debug/main.lst -g -D DEBUG -Wall -ffunction-sections -ffat-lto-objects -O0 -c main.c -o .\CortexM0\ARM_GCC_541\Debug\main.o[m
 arm-none-eabi-ar.exe -rs .\CortexM0\ARM_GCC_541\Debug\UART_to_BLE_central.a .\CortexM0\ARM_GCC_541\Debug\BLE.o .\CortexM0\ARM_GCC_541\Debug\BLE_gatt.o .\CortexM0\ARM_GCC_541\Debug\BLE_eventHandler.o .\CortexM0\ARM_GCC_541\Debug\BLE_HAL_INT.o .\CortexM0\ARM_GCC_541\Debug\BLE_HAL_PVT.o .\CortexM0\ARM_GCC_541\Debug\BLE_custom.o .\CortexM0\ARM_GCC_541\Debug\Scan_LED.o .\CortexM0\ARM_GCC_541\Debug\Scan_LED_PM.o .\CortexM0\ARM_GCC_541\Debug\Conn_LED.o .\CortexM0\ARM_GCC_541\Debug\Conn_LED_PM.o .\CortexM0\ARM_GCC_541\Debug\UART.o .\CortexM0\ARM_GCC_541\Debug\UART_SPI_UART.o .\CortexM0\ARM_GCC_541\Debug\UART_SPI_UART_INT.o .\CortexM0\ARM_GCC_541\Debug\UART_PM.o .\CortexM0\ARM_GCC_541\Debug\UART_UART.o .\CortexM0\ARM_GCC_541\Debug\UART_BOOT.o .\CortexM0\ARM_GCC_541\Debug\UART_UART_BOOT.o .\CortexM0\ARM_GCC_541\Debug\BLE_bless_isr.o .\CortexM0\ARM_GCC_541\Debug\UART_SCBCLK.o .\CortexM0\ARM_GCC_541\Debug\UART_tx.o .\CortexM0\ARM_GCC_541\Debug\UART_tx_PM.o .\CortexM0\ARM_GCC_541\Debug\UART_SCB_IRQ.o .\CortexM0\ARM_GCC_541\Debug\UART_rx.o .\CortexM0\ARM_GCC_541\Debug\UART_rx_PM.o .\CortexM0\ARM_GCC_541\Debug\CyFlash.o .\CortexM0\ARM_GCC_541\Debug\CyLib.o .\CortexM0\ARM_GCC_541\Debug\cyPm.o .\CortexM0\ARM_GCC_541\Debug\cyutils.o .\CortexM0\ARM_GCC_541\Debug\CyLFClk.o .\CortexM0\ARM_GCC_541\Debug\CyBootAsmGnu.o[m
 arm-none-eabi-ar.exe: creating .\CortexM0\ARM_GCC_541\Debug\UART_to_BLE_central.a[m
 arm-none-eabi-gcc.exe -Wl,--start-group -o C:\Users\Daniela\Desktop\Bluetooth_Project\UART_to_BLE_central\UART_to_BLE_central.cydsn\CortexM0\ARM_GCC_541\Debug\UART_to_BLE_central.elf .\CortexM0\ARM_GCC_541\Debug\main.o .\CortexM0\ARM_GCC_541\Debug\app_Ble.o .\CortexM0\ARM_GCC_541\Debug\app_UART.o .\CortexM0\ARM_GCC_541\Debug\app_LED.o .\CortexM0\ARM_GCC_541\Debug\teste.o .\CortexM0\ARM_GCC_541\Debug\cyfitter_cfg.o .\CortexM0\ARM_GCC_541\Debug\cymetadata.o .\CortexM0\ARM_GCC_541\Debug\Cm0Start.o .\CortexM0\ARM_GCC_541\Debug\UART_to_BLE_central.a "..\..\..\..\Documents\PSoC Creator\4.1\Downloads ( 4.1).cylib\BLE_v3_40\Library\gccCyBLEStack_BLE_SOC_CENTRAL_PERIPHERAL.a" "C:\Program Files (x86)\Cypress\PSoC Creator\4.1\PSoC Creator\psoc\content\cycomponentlibrary\CyComponentLibrary.cylib\CortexM0\ARM_GCC_541\Debug\CyComponentLibrary.a" -mcpu=cortex-m0 -mthumb -L Generated_Source\PSoC4 -Wl,-Map,.\CortexM0\ARM_GCC_541\Debug/UART_to_BLE_central.map -T Generated_Source\PSoC4\cm0gcc.ld -specs=nano.specs -Wl,--gc-sections -g -ffunction-sections -O0 -ffat-lto-objects -Wl,--end-group[m
 cyelftool.exe -C C:\Users\Daniela\Desktop\Bluetooth_Project\UART_to_BLE_central\UART_to_BLE_central.cydsn\CortexM0\ARM_GCC_541\Debug\UART_to_BLE_central.elf --flash_row_size 128 --flash_size 131072 --flash_offset 0x00000000[m
 cyelftool.exe -S C:\Users\Daniela\Desktop\Bluetooth_Project\UART_to_BLE_central\UART_to_BLE_central.cydsn\CortexM0\ARM_GCC_541\Debug\UART_to_BLE_central.elf[m
[31m-Flash used: 101681 of 131072 bytes (77,6%).[m
[32m+[m[32mFlash used: 101161 of 131072 bytes (77,2%).[m
 SRAM used: 15224 of 16384 bytes (92,9%). Stack: 2048 bytes. Heap: 128 bytes.[m
[31m---------------- Build Succeeded: 10/25/2017 15:03:28 ---------------[m
[32m+[m[32m--------------- Build Succeeded: 10/27/2017 13:59:11 ---------------[m
[1mdiff --git a/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/.deps/SOURCE_C__ARM_GCC_GENERIC.P b/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/.deps/SOURCE_C__ARM_GCC_GENERIC.P[m
[1mindex 74d025d..5d84a73 100644[m
[1m--- a/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/.deps/SOURCE_C__ARM_GCC_GENERIC.P[m
[1m+++ b/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/.deps/SOURCE_C__ARM_GCC_GENERIC.P[m
[36m@@ -1,4 +1,4 @@[m
[31m-C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/app_Ble.o : C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_HAL_PVT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_STACK_PVT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_Stack.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGap.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGatt.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGattClient.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGattDb.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGattServer.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackHostMain.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackL2cap.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_bless_isr.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_custom.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_eventHandler.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_gatt.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/Conn_LED.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/Conn_LED_aliases.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/CyFlash.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/CyLFClk.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/CyLib.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/Scan_LED.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/Scan_LED_aliases.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_BOOT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_PINS.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_PVT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_SCBCLK.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_SCB_IRQ.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_SPI_UART.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_SPI_UART_PVT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_rx.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_rx_aliases.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_tx.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_tx_aliases.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cmsis_armcc.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cmsis_compiler.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cmsis_gcc.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/core_cm0.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/core_cm0_psoc4.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cyPm.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cydevice_trm.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cydisabledsheets.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cyfitter.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cyfitter_cfg.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cypins.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cytypes.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/project.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_Ble.c C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_Ble.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_LED.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_UART.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/main.h [m
[32m+[m[32mC:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/main.o : C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_HAL_PVT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_STACK_PVT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_Stack.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGap.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGatt.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGattClient.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGattDb.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackGattServer.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackHostMain.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_StackL2cap.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_bless_isr.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_custom.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_eventHandler.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE_gatt.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/Conn_LED.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/Conn_LED_aliases.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/CyFlash.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/CyLFClk.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/CyLib.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/Scan_LED.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/Scan_LED_aliases.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_BOOT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_PINS.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_PVT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_SCBCLK.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_SCB_IRQ.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_SPI_UART.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_SPI_UART_PVT.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_rx.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_rx_aliases.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_tx.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/UART_tx_aliases.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cmsis_armcc.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cmsis_compiler.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cmsis_gcc.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/core_cm0.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/core_cm0_psoc4.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cyPm.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cydevice_trm.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cydisabledsheets.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cyfitter.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cyfitter_cfg.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cypins.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/cytypes.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/project.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_Ble.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_LED.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_UART.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/main.c C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/main.h C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/teste.h[m[41m [m
 [m
 C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/BLE.h : [m
 [m
[36m@@ -94,13 +94,15 @@[m [mC:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_centr[m
 [m
 C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/Generated_Source/PSoC4/project.h : [m
 [m
[31m-C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_Ble.c : [m
[31m-[m
 C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_Ble.h : [m
 [m
 C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_LED.h : [m
 [m
 C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/app_UART.h : [m
 [m
[32m+[m[32mC:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/main.c :[m[41m [m
[32m+[m
 C:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/main.h : [m
 [m
[32m+[m[32mC:/Users/Daniela/Desktop/Bluetooth_Project/UART_to_BLE_central/UART_to_BLE_central.cydsn/teste.h :[m[41m [m
[32m+[m
[1mdiff --git a/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/BLE.lst b/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/BLE.lst[m
[1mindex 82d89fb..eb4565b 100644[m
[1m--- a/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/BLE.lst[m
[1m+++ b/UART_to_BLE_central/UART_to_BLE_central.cydsn/CortexM0/ARM_GCC_541/Debug/BLE.lst[m
[36m@@ -1,4 +1,4 @@[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 1[m
 [m
 [m
    1              		.syntax unified[m
[36m@@ -58,7 +58,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
   51 000f 00       		.space	1[m
   52              		.global	cyBle_discoveryData[m
   53              		.align	2[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 2[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 2[m
 [m
 [m
   54              		.type	cyBle_discoveryData, %object[m
[36m@@ -118,7 +118,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  104 0034 00000000 		.word	cyBle_discoveryParam[m
  105 0038 00000000 		.word	cyBle_discoveryData[m
  106 003c 00000000 		.word	cyBle_scanRspData[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 3[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 3[m
 [m
 [m
  107 0040 0A00     		.short	10[m
[36m@@ -178,7 +178,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
    9:Generated_Source\PSoC4/BLE.c **** * \copyright[m
   10:Generated_Source\PSoC4/BLE.c **** * Copyright 2014-2016, Cypress Semiconductor Corporation.  All rights reserved.[m
   11:Generated_Source\PSoC4/BLE.c **** * You may use this file only in accordance with the license, terms, conditions,[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 4[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 4[m
 [m
 [m
   12:Generated_Source\PSoC4/BLE.c **** * disclaimers, and limitations in the end user license agreement accompanying[m
[36m@@ -238,7 +238,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
   66:Generated_Source\PSoC4/BLE.c ****     0x00u,      /* uint8 direct_addr_type */[m
   67:Generated_Source\PSoC4/BLE.c ****     {0x13u, 0x11u, 0x10u, 0x50u, 0xA0u, 0x00u}, /* uint8* direct_addr */[m
   68:Generated_Source\PSoC4/BLE.c ****     0x07u,      /* uint8 advertising_channel_map */[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 5[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 5[m
 [m
 [m
   69:Generated_Source\PSoC4/BLE.c ****     0x00u,      /* uint8 advertising_filter_policy */[m
[36m@@ -298,7 +298,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  123:Generated_Source\PSoC4/BLE.c ****    the BLE component is configured for Central GAP role or Central and  [m
  124:Generated_Source\PSoC4/BLE.c ****    Peripheral GAP role. It contains the Scan settings entered in the  [m
  125:Generated_Source\PSoC4/BLE.c ****    customizer. This variable can be used by advanced users to change Scan  [m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 6[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 6[m
 [m
 [m
  126:Generated_Source\PSoC4/BLE.c ****    settings in runtime.[m
[36m@@ -358,7 +358,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  170:Generated_Source\PSoC4/BLE.c ****     cyBle_eventHandlerFlag = 0u;[m
  163              		.loc 1 170 0[m
  164 0004 1B4B     		ldr	r3, .L2[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 7[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 7[m
 [m
 [m
  165 0006 0022     		movs	r2, #0[m
[36m@@ -418,7 +418,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  202 0040 DA81     		strh	r2, [r3, #14][m
  188:Generated_Source\PSoC4/BLE.c ****         cyBle_connectionParameters.connIntvMax = CYBLE_GAPC_CONNECTION_INTERVAL_MAX;[m
  203              		.loc 1 188 0[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 8[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 8[m
 [m
 [m
  204 0042 114B     		ldr	r3, .L2+20[m
[36m@@ -478,7 +478,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  242 0084 00000000 		.word	cyBle_discoveryInfo[m
  243 0088 00000000 		.word	cyBle_connectionParameters[m
  244 008c 00000000 		.word	cyBle_connectingTimeout[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 9[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 9[m
 [m
 [m
  245              		.cfi_endproc[m
[36m@@ -538,7 +538,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  278              		.loc 1 225 0[m
  279 0018 074B     		ldr	r3, .L7[m
  280 001a DB88     		ldrh	r3, [r3, #6][m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 10[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 10[m
 [m
 [m
  281 001c 002B     		cmp	r3, #0[m
[36m@@ -598,7 +598,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  271:Generated_Source\PSoC4/BLE.c ****     #ifdef CYBLE_CTS[m
  272:Generated_Source\PSoC4/BLE.c ****         CyBle_CtsInit();[m
  273:Generated_Source\PSoC4/BLE.c ****     #endif /* CYBLE_CTS */[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 11[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 11[m
 [m
 [m
  274:Generated_Source\PSoC4/BLE.c **** [m
[36m@@ -658,7 +658,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  326:Generated_Source\PSoC4/BLE.c ****     [m
  327:Generated_Source\PSoC4/BLE.c ****     #ifdef CYBLE_PASS[m
  328:Generated_Source\PSoC4/BLE.c ****         CyBle_PassInit();[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 12[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 12[m
 [m
 [m
  329:Generated_Source\PSoC4/BLE.c ****     #endif /* CYBLE_PASS */[m
[36m@@ -718,7 +718,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  312 0004 3000     		.short	48[m
  313 0006 01       		.byte	1[m
  314 0007 00       		.space	1[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 13[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 13[m
 [m
 [m
  315 0008 2800     		.short	40[m
[36m@@ -778,7 +778,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  400:Generated_Source\PSoC4/BLE.c **** *       <td>CYBLE_ERROR_INVALID_PARAMETER</td>[m
  401:Generated_Source\PSoC4/BLE.c **** *       <td>On passing a NULL pointer to the function. [m
  402:Generated_Source\PSoC4/BLE.c **** *		</td>[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 14[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 14[m
 [m
 [m
  403:Generated_Source\PSoC4/BLE.c **** *     </tr>[m
[36m@@ -838,7 +838,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  359 001c 1A00     		movs	r2, r3[m
  360 001e FFF7FEFF 		bl	memcpy[m
  430:Generated_Source\PSoC4/BLE.c ****     {[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 15[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 15[m
 [m
 [m
  431:Generated_Source\PSoC4/BLE.c ****         {CYBLE_GATT_MTU_PLUS_L2CAP_MEM_EXT, CYBLE_GATT_MTU_BUFF_COUNT + CYBLE_GATT_MAX_ATTR_BUFF_CO[m
[36m@@ -898,7 +898,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  384 0044 1B88     		ldrh	r3, [r3][m
  385 0046 002B     		cmp	r3, #0[m
  386 0048 29D1     		bne	.L12[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 16[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 16[m
 [m
 [m
  387              	.LBB2:[m
[36m@@ -958,7 +958,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  483:Generated_Source\PSoC4/BLE.c ****             /* Configure LL Privacy */[m
  484:Generated_Source\PSoC4/BLE.c ****             privacyConfigParams.resolvingListSize = CYBLE_MAX_RESOLVABLE_DEVICES;[m
  420              		.loc 1 484 0[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 17[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 17[m
 [m
 [m
  421 007e 1C23     		movs	r3, #28[m
[36m@@ -1018,7 +1018,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  458 00c0 0523     		movs	r3, #5[m
  459 00c2 0093     		str	r3, [sp][m
  460 00c4 2B00     		movs	r3, r5[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 18[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 18[m
 [m
 [m
  461 00c6 FFF7FEFF 		bl	CyBle_StackInit[m
[36m@@ -1078,7 +1078,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  537:Generated_Source\PSoC4/BLE.c ****         apiResult = CYBLE_ERROR_INVALID_PARAMETER;[m
  480              		.loc 1 537 0[m
  481 00e6 3E23     		movs	r3, #62[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 19[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 19[m
 [m
 [m
  482 00e8 FB18     		adds	r3, r7, r3[m
[36m@@ -1138,7 +1138,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  557:Generated_Source\PSoC4/BLE.c **** {[m
  517              		.loc 1 557 0[m
  518              		.cfi_startproc[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 20[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 20[m
 [m
 [m
  519              		@ args = 0, pretend = 0, frame = 0[m
[36m@@ -1198,7 +1198,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  578:Generated_Source\PSoC4/BLE.c **** *  and Flash before writing to Flash. If there is no change between RAM and Flash[m
  579:Generated_Source\PSoC4/BLE.c **** *  data, then no write is performed. It writes only one flash row in one call.[m
  580:Generated_Source\PSoC4/BLE.c **** *  Application should keep calling this function till it return CYBLE_ERROR_OK. [m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 21[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 21[m
 [m
 [m
  581:Generated_Source\PSoC4/BLE.c **** *  This function is available only when Bonding requirement is selected in[m
[36m@@ -1258,7 +1258,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  635:Generated_Source\PSoC4/BLE.c ****     {[m
  636:Generated_Source\PSoC4/BLE.c ****         apiResult = CyBle_StoreAppData(cyBle_attValuesCCCD, cyBle_flashStorage.attValuesCCCDFlashMe[m
  637:Generated_Source\PSoC4/BLE.c ****                         cyBle_connHandle.bdHandle], CYBLE_GATT_DB_CCCD_COUNT, isForceWrite);[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 22[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 22[m
 [m
 [m
  638:Generated_Source\PSoC4/BLE.c ****         if(apiResult == CYBLE_ERROR_OK)[m
[36m@@ -1318,7 +1318,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  692:Generated_Source\PSoC4/BLE.c **** *                 removed from trusted list and white list.[m
  693:Generated_Source\PSoC4/BLE.c **** *[m
  694:Generated_Source\PSoC4/BLE.c **** * \return[m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 23[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 23[m
 [m
 [m
  695:Generated_Source\PSoC4/BLE.c **** *  CYBLE_API_RESULT_T : Return value indicates if the function succeeded or[m
[36m@@ -1378,7 +1378,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  749:Generated_Source\PSoC4/BLE.c ****     return(apiResult);[m
  750:Generated_Source\PSoC4/BLE.c **** }[m
  751:Generated_Source\PSoC4/BLE.c **** [m
[31m-ARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 24[m
[32m+[m[32mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc3N8Jwm.s 			page 24[m
 [m
 [m
  752:Generated_Source\PSoC4/BLE.c **** [m
[36m@@ -1438,7 +1438,7 @@[m [mARM GAS  C:\Users\Daniela\AppData\Local\Temp\cc1Zk3Km.s 			page 1[m
  806:Generated_Source\PSoC4/BLE.c ****     *******************************************************************************/[m
  807:Generated_Source\PSoC4/BLE.c ****     CYBLE_API_RESULT_T CyBle_GappStartAdvertisement(