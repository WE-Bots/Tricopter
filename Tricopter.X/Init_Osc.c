/**********************************************************
;Asterik Research Electonics
;Initialize Ocillator Templet

;*********************************************************/



#include "Micros_h_File.h"


void init_Osc(void)    
{
 		// Configure PLL prescaler, PLL postscaler, PLL divisor  
        int test = 0;
		 //Fosc = Fin*(M/(n1*n2))
	PLLFBD=63; 							// M = PLLFBD + 2 63 = 60mips fosc 120Mhz 44 =  40 mips  fosc 80mhz
	CLKDIVbits.PLLPOST=0;   				// N1 = 2  
	CLKDIVbits.PLLPRE=0;    				// N2 = 2  

    	__builtin_write_OSCCONH(0x01);			// New Oscillator FRC w/ PLL  
    	__builtin_write_OSCCONL(0x01);  		// Enable Switch  
      
	while(OSCCONbits.COSC != 0b001)
        {
#ifdef  SIM

            break;
#endif

        };		// Wait for new Oscillator to become FRC w/ PLL
    	while(OSCCONbits.LOCK != 1)
        {
#ifdef  SIM

            break;
#endif
        };			// Wait for Pll to Lock

       
        test = test  + 1;

}
