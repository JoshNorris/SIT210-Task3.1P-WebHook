#include "HC_SR04.h"

double cm = 0.0;

int trigPin = D4;
int echoPin = D5;

HC_SR04 rangefinder = HC_SR04(trigPin, echoPin);

void setup() 
{
   
}

void loop() 
{
    cm = rangefinder.getDistanceCM();
    Particle.publish("range(cm)", String(cm), PRIVATE);
    delay(30000);
}
