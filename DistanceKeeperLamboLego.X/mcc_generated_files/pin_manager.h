/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1619
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set ECHO aliases
#define ECHO_TRIS                 TRISAbits.TRISA4
#define ECHO_LAT                  LATAbits.LATA4
#define ECHO_PORT                 PORTAbits.RA4
#define ECHO_WPU                  WPUAbits.WPUA4
#define ECHO_OD                   ODCONAbits.ODA4
#define ECHO_ANS                  ANSELAbits.ANSA4
#define ECHO_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ECHO_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ECHO_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ECHO_GetValue()           PORTAbits.RA4
#define ECHO_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ECHO_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ECHO_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define ECHO_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define ECHO_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define ECHO_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define ECHO_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define ECHO_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set TRIGGER aliases
#define TRIGGER_TRIS                 TRISAbits.TRISA5
#define TRIGGER_LAT                  LATAbits.LATA5
#define TRIGGER_PORT                 PORTAbits.RA5
#define TRIGGER_WPU                  WPUAbits.WPUA5
#define TRIGGER_OD                   ODCONAbits.ODA5
#define TRIGGER_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define TRIGGER_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define TRIGGER_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define TRIGGER_GetValue()           PORTAbits.RA5
#define TRIGGER_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define TRIGGER_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define TRIGGER_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define TRIGGER_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define TRIGGER_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define TRIGGER_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set DIR_1 aliases
#define DIR_1_TRIS                 TRISCbits.TRISC4
#define DIR_1_LAT                  LATCbits.LATC4
#define DIR_1_PORT                 PORTCbits.RC4
#define DIR_1_WPU                  WPUCbits.WPUC4
#define DIR_1_OD                   ODCONCbits.ODC4
#define DIR_1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define DIR_1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define DIR_1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define DIR_1_GetValue()           PORTCbits.RC4
#define DIR_1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define DIR_1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define DIR_1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define DIR_1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define DIR_1_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define DIR_1_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set DIR_2 aliases
#define DIR_2_TRIS                 TRISCbits.TRISC5
#define DIR_2_LAT                  LATCbits.LATC5
#define DIR_2_PORT                 PORTCbits.RC5
#define DIR_2_WPU                  WPUCbits.WPUC5
#define DIR_2_OD                   ODCONCbits.ODC5
#define DIR_2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define DIR_2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define DIR_2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define DIR_2_GetValue()           PORTCbits.RC5
#define DIR_2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define DIR_2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define DIR_2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define DIR_2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define DIR_2_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define DIR_2_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/