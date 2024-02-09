/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1619
        Driver Version    :  2.00
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
#include <stdio.h>
#include "mcc_generated_files/mcc.h"
float distance = 0;
float SAIDA = 0;
float SAIDA_PWM = 0;
float E = 0;
void main(void){
    SYSTEM_Initialize();
    PWM3_Initialize();
    while (1){     
        TMR1H =0; TMR1L =0; //clear the timer bits
        TRIGGER_SetHigh(); 
        __delay_us(10);           
        TRIGGER_SetLow();  
        while (ECHO_GetValue()==0);
            TMR1ON = 1;
        while (ECHO_GetValue()==1);
            TMR1ON = 0;
        int time_taken = (TMR1L | (TMR1H<<8));  
        double distance = ((0.0343*time_taken)/2);       
        E = (20 - distance)/1.5;      
        SAIDA = (E * 35.51);       
        if (SAIDA > 200) {SAIDA = 200;}
        if (SAIDA < -200) { SAIDA = -200;}       
        SAIDA_PWM = SAIDA;   
        if (SAIDA_PWM < -5 ) {
        PWM3_LoadDutyValue(SAIDA_PWM*-1);
        DIR_1_SetHigh();
        DIR_2_SetLow();
        } else if(SAIDA_PWM > 5) {
        PWM3_LoadDutyValue(SAIDA_PWM);
        DIR_1_SetLow();
        DIR_2_SetHigh();
        } else{  
        PWM3_LoadDutyValue(0);
         DIR_1_SetLow();
        DIR_2_SetLow();} 
        printf("Distancia:  %f \r",distance);
        printf("distance_control:  %f \r\n",E);
        printf("SAIDA:  %f \r",SAIDA);
        printf("SAIDA_PWM:  %f \r",SAIDA_PWM);
    }
}
/**
 End of File
*/