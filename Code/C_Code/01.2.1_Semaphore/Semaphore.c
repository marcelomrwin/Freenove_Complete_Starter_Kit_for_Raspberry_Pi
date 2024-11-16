/**********************************************************************
* Filename    : Semaphore.c
* Description : Traffic Light Semaphore Simulation usage of GPIO. Let led blink.
* auther      : www.freenove.com
* modification: 2024/07/14
**********************************************************************/
#include <wiringPi.h>
#include <stdio.h>

#define  redPin    0	//define the red led pin number
#define  yellowPin 2    //define the yellow led pin number
#define  greenPin  3    //define the green led pin number

void turnOnRed(){
	digitalWrite(yellowPin,LOW);
	digitalWrite(greenPin,LOW);
	digitalWrite(redPin,HIGH);
}

void turnOnYellow(){
	digitalWrite(redPin,LOW);
	digitalWrite(greenPin,LOW);
	digitalWrite(yellowPin,HIGH);
}

void turnOnGreen(){
	digitalWrite(redPin,LOW);
	digitalWrite(yellowPin,LOW);
	digitalWrite(greenPin,HIGH);
}


void main(void)
{	
	printf("Semaphore Program is starting ... \n");
	
	wiringPiSetup();	//Initialize wiringPi.
	
	// Set the pin mode to OUTPUT
	pinMode(redPin, OUTPUT);   
	pinMode(yellowPin, OUTPUT);
	pinMode(greenPin, OUTPUT);	
				
	printf("Using pin%d as Red\n",redPin);	
	printf("Using pin%d as Yellow\n",yellowPin);
	printf("Using pin%d as Green\n",greenPin);

	while(1){
		turnOnRed();					     
		printf("red turned on >>>\n");
		delay(3000);
		turnOnGreen();
		printf("green turned on <<<\n");
		delay(5000);
		turnOnYellow();
		printf("yellow turned on >>>\n");
		delay(1500);
	}
}


