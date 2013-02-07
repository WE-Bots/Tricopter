/**********************************************************
;Electronics Shop 
;Configuation Bits Header Templet

;*********************************************************
;Document Control
;	Version Number chage by a large changes to code
;	Revision Number change by small changes to code
;	Add new entries to the top line and move older entries down
;	DO NOT erase any entries!!!
;
;Date/Time			:	Who	 			   		:	Version/Revision	:	Description		
;2011/08/09 08:30 	:E. Porter Electronics Shop :	0.0					:	Templet File
;
;
;
;**********************************************************/

/****************************************************************
DEVICE CONFIGURATION REGISTER MAP
AddrAdress 	Name 		Bit 7 		Bit 6 		Bit 5 		Bit 4 		Bit 3 		Bit 2 		Bit 1 	Bit 0
0xF80000 	FBS 		— 			— 			— 			— 			BSS<2:0>	 					BWRP
0xF80002 	RESERVED	— 			— 			— 			— 			— 			— 			— 		—
0xF80004 	FGS 		— 			— 			— 			— 			— 			GSS<1:0>	 		GWRP
0xF80006 	FOSCSEL 	IESO 		— 			— 			— 			-			FNOSC<2:0>
0xF80008 	FOSC 		FCKSM<1:0> 				— 			— 			— 			OSCIOFNC 	POSCMD<1:0>
0xF8000A 	FWDT 		FWDTEN 		WINDIS 		— 			WDTPRE 		WDTPOST<3:0>
0xF8000C 	FPOR 		— 			ALTQIO 		ALTSS1 		— 			— 			FPWRT<2:0>
0xF8000E 	FICD 		Reserved(1) Reserved(1)	JTAGEN 		— 			—			— 			ICS<1:0>
0xF80010 	FCMP 		— 			— 			CMPPOL1(2) 	HYST1<1:0>(2) 			CMPPOL0(2) 	HYST0<1:0>(2)



Bit Field 		Register 						Description
BWRP 			FBS 					Boot Segment Program Flash Write Protection bit
											1 = Boot segment can be written
											0 = Boot segment is write-protected

BSS<2:0> 		FBS 					Boot Segment Program Flash Code Protection Size bits
											X11 = No boot program Flash segment
										Boot space is 256 instruction words (except interrupt vectors)
											110 = Standard security; boot program Flash segment ends at
													0x0003FE
											010 = High security; boot program Flash segment ends at 0x0003FE
										Boot space is 768 instruction words (except interrupt vectors)
											101 = Standard security; boot program Flash segment ends at
													0x0007FE
											001 = High security; boot program Flash segment ends at 0x0007FE
										Boot space is 1792 instruction words (except interrupt vectors)
											100 = Standard security; boot program Flash segment ends at
													0x000FFE
											000 = High security; boot program Flash segment ends at 0x000FFE

GSS<1:0> 		FGS 					General Segment Code-Protect bits
											11 = User program memory is not code-protected
											10 = Standard security
											0x = High security

GWRP 			FGS 					General Segment Write-Protect bit
											1 = User program memory is not write-protected
											0 = User program memory is write-protected

IESO 			FOSCSEL 				Two-speed Oscillator Start-up Enable bit
											1 = Start-up device with FRC, then automatically switch to the
												user-selected oscillator source when ready
											0 = Start-up device with user-selected oscillator source

FNOSC<2:0> 		FOSCSEL 				Initial Oscillator Source Selection bits
											111 = Internal Fast RC (FRC) oscillator with postscaler
											110 = Internal Fast RC (FRC) oscillator with divide-by-16
											101 = LPRC oscillator
											100 = Secondary (LP) oscillator
											011 = Primary (XT, HS, EC) oscillator with PLL
											010 = Primary (XT, HS, EC) oscillator
											001 = Internal Fast RC (FRC) oscillator with PLL
											000 = FRC oscillator

FCKSM<1:0> 		FOSC 					Clock Switching Mode bits
											1x = Clock switching is disabled, Fail-Safe Clock Monitor is disabled
											01 = Clock switching is enabled, Fail-Safe Clock Monitor is disabled
											00 = Clock switching is enabled, Fail-Safe Clock Monitor is enabled

OSCIOFNC 		FOSC 					OSC2 Pin Function bit (except in XT and HS modes)
											1 = OSC2 is clock output
											0 = OSC2 is general purpose digital I/O pin

POSCMD<1:0> 	FOSC 					Primary Oscillator Mode Select bits
											11 = Primary oscillator disabled
											10 = HS Crystal Oscillator mode
											01 = XT Crystal Oscillator mode
											00 = EC (External Clock) mode

FWDTEN 			FWDT 					Watchdog Timer Enable bit
											1 = Watchdog Timer always enabled (LPRC oscillator cannot be disabled;
												clearing the SWDTEN bit in the RCON register will have no effect)
											0 = Watchdog Timer enabled/disabled by user software (LPRC can be
												disabled by clearing the SWDTEN bit in the RCON register)

WINDIS 			FWDT 					Watchdog Timer Window Enable bit
											1 = Watchdog Timer in Non-Window mode
											0 = Watchdog Timer in Window mode

WDTPRE 			FWDT 					Watchdog Timer Prescaler bit
											1 = 1:128
											0 = 1:32

WDTPOST<3:0> 	FWDT 					Watchdog Timer Postscaler bits
											1111 = 1:32,768
											1110 = 1:16,384
												•
												•
												•
											0001 = 1:2
											0000 = 1:1

FPWRT<2:0> 		FPOR 					Power-on Reset Timer Value Select bits
											111 = PWRT = 128 ms
											110 = PWRT = 64 ms
											101 = PWRT = 32 ms
											100 = PWRT = 16 ms
											011 = PWRT = 8 ms
											010 = PWRT = 4 ms
											001 = PWRT = 2 ms
											000 = PWRT = Disabled

JTAGEN 			FICD 					JTAG Enable bit
											1 = JTAG is enabled
											0 = JTAG is disabled

ICS<1:0> 		FICD 					ICD Communication Channel Select Enable bits
											11 = Communicate on PGEC1 and PGED1
											10 = Communicate on PGEC2 and PGED2
											01 = Communicate on PGEC3 and PGED3
											00 = Reserved, do not use.

ALTQIO 			FPOR 					Enable Alternate QEI1 pin bit
											1 = QEA1, QEB1 and INDX1 are selected as inputs to QEI1
											0 = AQEA1, AQEB1 and AINDX1 are selected as inputs to QEI1

ALTSS1 			FPOR 					Enable Alternate SS1 pin bit
											1 = ASS1 is selected as the I/O pin for SPI1
											0 = SS1 is selected as the I/O pin for SPI1

CMPPOL0 		FCMP 					Comparator Hysteresis Polarity (for even numbered comparators)
											1 = Hysteresis is applied to falling edge
											0 = Hysteresis is applied to rising edge
	
HYST0<1:0> 		FCMP 					Comparator Hysteresis Select
											11 = 45 mV Hysteresis
											10 = 30 mV Hysteresis
											01 = 15 mV Hysteresis
											00 = No Hysteresis

CMPPOL1 		FCMP 					Comparator Hysteresis Polarity (for odd numbered comparators)
											1 = Hysteresis is applied to falling edge
											0 = Hysteresis is applied to rising edge

HYST1<1:0> 		FCMP 					Comparator Hysteresis Select
											11 = 45 mV Hysteresis
											10 = 30 mV Hysteresis
											01 = 15 mV Hysteresis
											00 = No Hysteresis







****************************************************************/



// DSPIC33FJ32MC202 Configuration Bit Settings

#include <p33Fxxxx.h>

// FBS
#pragma config BWRP = WRPROTECT_OFF     // Boot Segment Write Protect (Boot Segment may be written)
#pragma config BSS = NO_FLASH           // Boot Segment Program Flash Code Protection (No Boot program Flash segment)

// FGS
#pragma config GWRP = OFF               // General Code Segment Write Protect (User program memory is not write-protected)
#pragma config GSS = OFF                // General Segment Code Protection (User program memory is not code-protected)

// FOSCSEL
#pragma config FNOSC = FRCPLL           // Oscillator Mode (Internal Fast RC (FRC) w/ PLL)
#pragma config IESO = ON                // Internal External Switch Over Mode (Start-up device with FRC, then automatically switch to user-selected oscillator source when ready)

// FOSC
#pragma config POSCMD = NONE            // Primary Oscillator Source (Primary Oscillator Disabled)
#pragma config OSCIOFNC = OFF           // OSC2 Pin Function (OSC2 pin has clock out function)
#pragma config IOL1WAY = ON             // Peripheral Pin Select Configuration (Allow Only One Re-configuration)
#pragma config FCKSM = CSECMD           // Clock Switching and Monitor (Clock switching is enabled, Fail-Safe Clock Monitor is disabled)

// FWDT
#pragma config WDTPOST = PS32768        // Watchdog Timer Postscaler (1:32,768)
#pragma config WDTPRE = PR128           // WDT Prescaler (1:128)
#pragma config WINDIS = OFF             // Watchdog Timer Window (Watchdog Timer in Non-Window mode)
#pragma config FWDTEN = OFF             // Watchdog Timer Enable (Watchdog timer enabled/disabled by user software)

// FPOR
#pragma config FPWRT = PWR128           // POR Timer Value (128ms)
#pragma config ALTI2C = OFF             // Alternate I2C  pins (I2C mapped to SDA1/SCL1 pins)
#pragma config LPOL = ON                // Motor Control PWM Low Side Polarity bit (PWM module low side output pins have active-high output polarity)
#pragma config HPOL = ON                // Motor Control PWM High Side Polarity bit (PWM module high side output pins have active-high output polarity)
#pragma config PWMPIN = ON              // Motor Control PWM Module Pin Mode bit (PWM module pins controlled by PORT register at device Reset)

// FICD
#pragma config ICS = PGD1               // Comm Channel Select (Communicate on PGC1/EMUC1 and PGD1/EMUD1)
#pragma config JTAGEN = OFF             // JTAG Port Enable (JTAG is Disabled)