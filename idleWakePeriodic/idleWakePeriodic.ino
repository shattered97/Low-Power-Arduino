// **** INCLUDES *****
#include "LowPower.h"
//reference:  rocketscream low power Ardunio Library

/*  Modified code by added a blinking LED to compare against baseline readings

Brian Watral
25 July 2015
 
*/

void setup()
{
  pinMode(13, OUTPUT);  //setup ditial pin 13 as output
}

void loop() 
{
  //Turn on LED for 5 seconds for current reading
  digitalWrite(13, HIGH);  //Turn LED ON
  delay(5000);  //Sit and wait for 5 seconds
  digitalWrite(13, LOW);  //Turn LED Off
  
  // Enter idle state for 8 s with the rest of peripherals turned off
  // Each microcontroller comes with different number of peripherals
  // Comment off line of code where necessary

  // ATmega328P, ATmega168
  LowPower.idle(SLEEP_8S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, 
                SPI_OFF, USART0_OFF, TWI_OFF);
  

  // ATmega32U4
  //LowPower.idle(SLEEP_8S, ADC_OFF, TIMER4_OFF, TIMER3_OFF, TIMER1_OFF, 
  //		  TIMER0_OFF, SPI_OFF, USART1_OFF, TWI_OFF, USB_OFF);

  // ATmega2560
  //LowPower.idle(SLEEP_8S, ADC_OFF, TIMER5_OFF, TIMER4_OFF, TIMER3_OFF, 
  //		  TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART3_OFF, 
  //		  USART2_OFF, USART1_OFF, USART0_OFF, TWI_OFF);

  // Do something here
  // Example: Read sensor, data logging, data transmission.
}

