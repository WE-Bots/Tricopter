/**********************************************************
;Asterik Research Electonics
;Initialize ADC Templet

*********************************************************/

#include "Micros_h_File.h"

void init_ADC(void)  
{	 
    	//AD1CON1bits.FORM = 0;			//Integer data format
    	//AD1CON1bits.EIE = 0;				//Early Interrupt disabled
    	//AD1CON1bits.ORDER = 0;			//Convert even channel first
    	//AD1CON1bits.SEQSAMP = 0;		//Select simultaneous sampling
    	//AD1CON1bits.ADCS = 5;			//ADC clock = FADC/6 = 120MHz / 6 = 20MHz

    	ADPCFGbits.PCFG0 = 0; 		 //select CH0 as analog pin 
    	ADPCFGbits.PCFG1 = 0; 		 //select CH1 as analog pin

    	//IFS6bits.ADCP0IF = 0;			//Clear ADC Pair 0 interrupt flag
    	//IPC27bits.ADCP0IP = 5;			//Set ADC Pair 0 interrupt priority
    	//IEC6bits.ADCP0IE = 1;			//Enable the ADC Pair 0 interrupt

     	//ADSTATbits.P0RDY = 0; 			//Clear Pair 0 data ready bit
    	//ADCPC0bits.IRQEN0 = 1;		//Enable ADC Interrupt pair 0
    	//ADCPC0bits.TRGSRC0 = 4; 		//ADC Pair 0 triggered by PWM1 Trigger

	//TRGCON1bits.DTM=1;			//dual trigger mode
	//TRIG1bits.TRGCMP=0;			//Primary trig compare value
	//STRIG1bits.STRGCMP=0xFFF;	//secondary trig compare value

 	//TRGCON1bits.TRGDIV = 0;		// Trigger generated every PWM cycle
	//TRGCON1bits.TRGSTRT = 0;		// enable Trigger generated after 0 PWM cycles
	//TRIG1 = 1;						// Trigger compare value
}


