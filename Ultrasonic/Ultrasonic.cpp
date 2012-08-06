/*
  Ultrasonic.cpp - Library for HC-SR04 Ultrasonic Ranging Module.library

  Created by ITead studio. Apr 20, 2010.
  iteadstudio.com

  Changed by: Marcelo Balloni
   Reduced memory usage and compatibility with new versions of the arduino IDE.
*/

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(int trigPin, int echoPin)
{
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   this->trigPin=trigPin;
   this->echoPin=echoPin;
}

long Ultrasonic::timing()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  return pulseIn(echoPin, HIGH);
}

long Ultrasonic::ranging(int sys)
{
  if (sys) {
  	return timing() / 29 / 2 ;
  } else {
  	return timing() / 74 / 2;
  }
}
