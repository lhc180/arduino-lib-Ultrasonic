/*
  Ultrasonic.h - Library for HR-SC04 Ultrasonic Ranging Module.
  Created by ITead studio. Alex, Apr 20, 2010.
  iteadstudio.com
*/


#ifndef Ultrasonic_h
#define Ultrasonic_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#define CM 1
#define INC 0

class Ultrasonic
{
  public:
    Ultrasonic(int trigPin, int echoPin);
    long timing();
    long ranging(int sys);

    private:
    int trigPin;
    int echoPin;
};

#endif
