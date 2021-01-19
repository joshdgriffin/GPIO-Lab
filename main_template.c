#include <msp430.h> 
#include <stdbool.h>
#include <stdint.h>

/*
 * ENGR4230 WEEK 3 LAB STARTER CODE
 *
 * In this lab, you will be using several buttons and LEDs. Here
 * are the pin connections for those circuits:
 *
 * LaunchPad Buttons and LEDs
 * S1 - P2.1
 * S2 - P1.1
 * LED1 - P1.0
 * LED2 - P4.7
 *
 * BOOSTXL-EDUMKII Buttons and LEDs
 * S1 - Button1/1 (external pullup resistor), P4.0
 * PWM_RED - P2.4 (jumper J5 must be set to PWM_RED)
 * PWM_BLU - P1.4
 * PWM_GRN - P1.5
 *
 * LAB REQUIREMENTS:
 *
 * 1. Illuminate LED1 as long as LP_S1 is pressed
 * 2. Illuminate LED2 as long as LP_S2 is pressed
 * 3. Switch the color of the RGB LED each time MKII_S1 is pressed
 *
 * Note: Do not forget to turn off optimization for your CCS project!
 *
 */

void initPorts(void) {
    // place your code here!
}

void setLED1(void) {
    // place your code here!
}

void clearLED1(void) {
    // place your code here!
}

void setLED2(void) {
    // place your code here!
}

void clearLED2(void) {
    // place your code here!
}

void cycleRGBLED(void) {
    // place your code here!
}

/**
 * main.c
 */
void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    initPorts(); // initialize all of the ports

    // loop forever
    while(1) {

        // poll LP_S1
        if(){
            // place your code here!
        }

        // poll LP_S2
        if(){
            // place your code here!
        }


        // poll sw1 on the EDUMKII board, remember sw1 is high when it is not pressed because of the external pullup resistor
        if( !(P4IN & BIT0) ) {
            cycleRGBLED();
        }
    }
}
