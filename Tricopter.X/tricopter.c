/**********************************************************
;WE Bots
;Main

**********************************************************/




#include "Micros_h_File.h"
#include "Init_Declarations.h"

#include "Configutation_Bits_File.h"



int main(void)
{
        ubBufferIndex = 0;
        ubLastBufferIndex = 0;

	init_Osc();


	init_PWM();								// PWM Setup
	init_ADC();								// ADC Setup
	init_DAC_Comparators();


        init_T1();
        

	TRISBbits.TRISB4  = 0;		    	 		//RB4 as output
        TRISBbits.TRISB6  = 1;
        TRISBbits.TRISB7  = 1;

   // PTCONbits.PTEN = 1;					// Enable the PWM
//	ADCONbits.ADON = 1;					// Enable the ADC

        uiHeaderZeroCount = 0;
	IEC0bits.T1IE = 1;
//	uc_Main_Case_Index = 0;




    	while(1)
	{

        };

}

