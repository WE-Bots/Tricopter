/**********************************************************
;Asterik Research Electonics
;Initialize DAC and Comparatiors Templet

*********************************************************/



#include "Micros_h_File.h"

/***********************************************
CMPCONx: COMPARATOR CONTROL REGISTER

bit 15 		CMPON: Comparator Operating Mode bit
					1 = Comparator module is enabled
					0 = Comparator module is disabled (reduces power consumption)
bit 14 		Unimplemented: Read as ‘0’
bit 13 		CMPSIDL: Stop in Idle Mode bit
				1 = Discontinue module operation when device enters Idle mode.
				0 = Continue module operation in Idle mode
					If a device has multiple comparators, any CMPSIDL bit set to ‘1’ disables ALL comparators while in
					Idle mode.
bit 12-9 	Reserved: Read as ‘0’
bit 8 		DACOE: DAC Output Enable
				1 = DAC analog voltage is output to DACOUT pin(1)
				0 = DAC analog voltage is not connected to DACOUT pin
bit 7-6 	INSEL<1:0>: Input Source Select for Comparator bits
				00 = Select CMPxA input pin
				01 = Select CMPxB input pin
				10 = Select CMPxC input pin
				11 = Select CMPxD input pin
bit 5 		EXTREF: Enable External Reference bit
				1 = External source provides reference to DAC (maximum DAC voltage determined by external
					voltage source)
				0 = Internal reference sources provide reference to DAC (maximum DAC voltage determined by
					RANGE bit setting)
bit 4 		Reserved: Read as ‘0’
bit 3 		CMPSTAT: Current State of Comparator Output Including CMPPOL Selection bit
bit 2 		Reserved: Read as ‘0’
bit 1 		CMPPOL: Comparator Output Polarity Control bit
				1 = Output is inverted
				0 = Output is non-inverted
bit 0 		RANGE: Selects DAC Output Voltage Range bit
				1 = High Range: Max DAC Value = AVDD/2, 1.65V at 3.3V AVDD
				0 = Low Range: Max DAC Value = INTREF, 1.2V, ±1%
Note 1: DACOUT can be associated only with a single comparator at any given time. The software must ensure
that multiple comparators do not enable the DAC output by setting their respective DACOE bit.


CMPDACx: COMPARATOR DAC CONTROL REGISTER
bit 15-10 		Reserved: Read as ‘0’
bit 9-0 C		MREF<9:0>: Comparator Reference Voltage Select bits
					1111111111 = (CMREF * INTREF/1024) or (CMREF * (AVDD/2)/1024) volts depending on RANGE
									bit or (CMREF * EXTREF/1024) if EXTREF is set
						•
						•
						•
					0000000000 = 0.0 volts


***********************************************************************/
void init_DAC_Comparators(void)  
{	 
    	
    	//CMPCON1bits.CMPON = 1;
	//	CMPCON1bits.CMPSIDL = 0;
	//	CMPCON1bits.DACOE = 1;
	//	CMPCON1bits.INSEL = 0;
		
	//	CMPCON1bits.EXTREF = 0;
	//	CMPCON1bits.CMPPOL = 0;
	//	CMPCON1bits.RANGE = 0;

	//	CMPDAC1 = 0x03ff;

}


