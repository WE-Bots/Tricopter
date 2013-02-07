;**********************************************************
;Electronics Shop
;Interrupt Vectors

;*********************************************************
;Document Control
;	Version Number chage by a large changes to code
;	Revision Number change by small changes to code
;	Add new entries to the top line and move older entries down
;	DO NOT erase any entries!!!
;
;Date/Time			:	Who	 			   		:	Version/Revision	:	Description		
;2001/09/16 12:30 	:E. Porter Electronics Shop :	0.0					:	Templet File
;
;
;
;**********************************************************

	; Start at the reset vector
	.org	0x000
		goto	 __reset
	



		.org 0x006
IVT:
		goto	Oscillator_Fail_Trap_Vector ;0x006
        .org 0x008
		goto	Address_Error_Trap_Vector ;0x008
        .org 0x00A
		goto	Stack_Error_Trap_Vector  ;0x00A
        .org 0x00C
		goto	Math_Error_Trap_Vector   ;0x00C
        .org 0x00E
		goto	DMA_Error_Trap_Vector    ;0x00E
		.org 0x014
        goto	INT0_External_Interrupt_0 ;0x014
        .org 0x016
		goto	IC1_Input_Capture_1 ;0x016
        .org 0x0
		goto	OC1_Output_Compare_1 ;0x018
        retfie
		goto	T1_Timer1   ;0x01A
        retfie
		retfie	;reserved ;0x01C
        retfie
		goto	IC2_Input_Capture_2 ;0x01E
        retfie
		goto	OC2_Output_Compare_2    ;0x020
		goto	T2_Timer2   ;0x022
		goto	T3_Timer3   ;0x024
		goto	SPI1E_SPI1_Fault    ;0x026
		goto	SPI1_SPI1_Transfer_Done ;0x028
		goto	U1RX_UART1_Receiver ;0x02A
		goto	U1TX_UART1_Transmitter  ;0X02C
		goto	ADC1_ADC1  ;0x02E
        retfie	;Reserved ;0x030
        retfie	;Reserved ;0x031
		retfie	;Reserved ;0x032
		retfie	;Reserved ;0x033
		goto	SI2C1_I2C1_Slave_Event  ;0x034
		goto	MI2C1_I2C1_Master_Event ;0x036
		retfie	;Reserved ;0x038
		goto	CN_Input_Change_Notification_Interrupt  ;0x03A
		goto	INT1_External_Interrupt_1 ;0x03C
		retfie	;Reserved ;0x03E
        goto    IC7_Input_Capture 7 ;0x040
        goto    IC8_Input_Capture 8 ;0x042
        retfie	;Reserved ;0x043
        retfie	;Reserved ;0x044
		retfie	;Reserved ;0x045
		retfie	;Reserved ;0x046
        retfie	;Reserved ;0x047
        retfie	;Reserved ;0x048
		retfie	;Reserved ;0x049
		retfie	;Reserved ;0x04A
        retfie	;Reserved ;0x04B
        retfie	;Reserved ;0x04C
		retfie	;Reserved ;0x04D
		goto	INT2_External_Interrupt_2 ;0x04E
     .org 0x086
        goto	OC3_Output_Compare_3
		goto	OC4_Output_Compare_4
		goto	T4_Timer4
		goto	T5_Timer5
		goto	
		goto	U2RX_UART2_Receiver
		goto	U2TX_UART2_Transmitter
		goto	SPI2E_SPI2_Error
		goto	SPI2_SPI2_Transfer_Done
		goto	C1RX_ECAN1_Receive_Data_Ready
		goto	C1_ECAN1_Event
		goto	DMA3_DMA_Channel_3
		goto	IC3_Input_Capture_3
		goto	IC4_Input_Capture_4
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		goto	SI2C2_I2C2_Slave_Events
		goto	MI2C2_I2C2_Master_Events
		retfie
		retfie
		goto	INT3_External_Interrupt_3
		goto	INT4_External_Interrupt_4
		retfie
		retfie
		goto	PWM_PSEM_Special_Event_Match
		goto	QEI1_Position_Counter_Compare
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		goto	U1E_UART1_Error_Interrupt
		goto	U2E_UART2_Error_Interrupt
		retfie
		retfie
		retfie
		goto	C1TX_ECAN1_Transmit_Data_Request
		retfie
		retfie
		goto	PWM_Secondary_Special_Event_Match
		retfie
		goto	QEI2_Position_Counter_Compare
		retfie
		retfie
		retfie
		retfie
		retfie
		goto	ADC_Pair_8_Conversion_Done
		goto	ADC_Pair_9_Conversion_Done
		goto	ADC_Pair_10_Conversion_Done
		goto	ADC_Pair_11_Conversion_Done
		goto	ADC_Pair_12_Conversion_Done
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		retfie
		goto	PWM1_PWM1_Interrupt
		goto	PWM2_PWM2_Interrupt
		goto	PWM3_PWM3_Interrupt
		goto	PWM4_PWM4_Interrupt
		goto	PWM5_PWM5_Interrupt
		goto	PWM6_PWM6_Interrupt
		goto	PWM7_PWM7_Interrupt
		goto	PWM8_PWM8_Interrupt
		goto	PWM9_PWM9_Interrupt
		goto	CMP2_Analog_Comparator_2
		goto	CMP3_Analog_Comparator_3
		goto	CMP4_Analog_Comparator_4
		retfie
		retfie
		retfie
		retfie
		goto	ADC_Pair_0_Convert_Done
		goto	ADC_Pair_1_Convert_Done
		goto	ADC_Pair_2_Convert_Done
		goto	ADC_Pair_3_Convert_Done
		goto	ADC_Pair_4_Convert_Done
		goto	ADC_Pair_5_Convert_Done
		goto	ADC_Pair_6_Convert_Done
		goto	ADC_Pair_7_Convert_Done
	


