/**********************************************************
;Asterik Research Electonics
;Initialize Timer 1 Templet

;*********************************************************/


#include "Micros_h_File.h"



/*
	T1CON
	bit 15 TON: Timer1 On bit
		1 = Starts 16-bit Timer1
		0 = Stops 16-bit Timer1
	bit 14 Unimplemented: Read as ‘0’
	bit 13 TSIDL: Stop in Idle Mode bit
		1 = Discontinue module operation when device enters Idle mode
		0 = Continue module operation in Idle mode
	bit 12-7 Unimplemented: Read as ‘0’
	bit 6 TGATE: Timer1 Gated Time Accumulation Enable bit
		When T1CS = 1:
		This bit is ignored.
		When T1CS = 0:
			1 = Gated time accumulation enabled
			0 = Gated time accumulation disabled
	bit 5-4 TCKPS<1:0> Timer1 Input Clock Prescale Select bits
		11 = 1:256
		10 = 1:64
		01 = 1:8
		00 = 1:1
	bit 3 Unimplemented: Read as ‘0’
	bit 2 TSYNC: Timer1 External Clock Input Synchronization Select bit
		When TCS = 1:
			1 = Synchronize external clock input
			0 = Do not synchronize external clock input
		When TCS = 0:
		This bit is ignored.
	bit 1 TCS: Timer1 Clock Source Select bit
		1 = External clock from T1CK pin (on the rising edge)
		0 = Internal clock (FCY)
	bit 0 Unimplemented: Read as ‘0’
*/
void init_T1(void)    
{

 	T1CONbits.TON = 1;		//Turn on Timer1
	T1CONbits.TSIDL = 1;
	T1CONbits.TCKPS = 0;
	T1CONbits.TCKPS1 = 0;
	T1CONbits.TCS = 0;
	TMR1 = C_TMR1_TIME;


}
