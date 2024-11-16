/**********************************************************************
* Filename    : Shutdown.c
* Description : Traffic Light Semaphore Simulation usage of GPIO. Let led blink.
* auther      : www.freenove.com
* modification: 2024/07/14
**********************************************************************/
#include <wiringPi.h>
#include <stdio.h>

#define  redPin    0	//define the red led pin number
#define  yellowPin 2    //define the yellow led pin number
#define  greenPin  3    //define the green led pin number

void turnOffAll(){
	digitalWrite(yellowPin,LOW);
	digitalWrite(greenPin,LOW);
	digitalWrite(redPin,LOW);
}


void main(void)
{	
	printf("Semaphore Program is starting ... \n");
	
	wiringPiSetup();	//Initialize wiringPi.
	
	// Set the pin mode to OUTPUT
	pinMode(redPin, OUTPUT);   
	pinMode(yellowPin, OUTPUT);
	pinMode(greenPin, OUTPUT);	
				
	turnOffAll();

}


