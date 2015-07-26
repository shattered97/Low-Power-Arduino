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
    
    // Enter power down state for 8 s with ADC and BOD module disabled
    LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);  
    
    // Do something here
    // Example: Read sensor, data logging, data transmission.
}
