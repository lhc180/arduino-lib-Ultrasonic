/*
 Ultrasonic HC-SR04 example.
 Used the library from iTeadStudio with a feel changes (to improve memory usage and name conventions).
 The original lib can be found here:
 http://iteadstudio.com/application-note/arduino-library-for-ultrasonic-ranging-module-hc-sr04/
*/

#include <Ultrasonic.h>

Ultrasonic ultrasonic(12,13); // TRIG = pino 12     ECHO = pino 13

void setup() {
   Serial.begin(9600);
}

void loop()
{
   Serial.print("distancia em centimetros : ");
   Serial.println(ultrasonic.ranging(CM));
   delay(1000);
}
