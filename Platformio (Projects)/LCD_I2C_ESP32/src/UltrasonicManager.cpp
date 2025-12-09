#include "UltrasonicManager.h"

UltrasonicManager::UltrasonicManager(int trig, int echo){
    trigPin = trig;
    echoPin = echo;
};

void UltrasonicManager::begin(){
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
};

float UltrasonicManager::getDistanceCM(){
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    long duration = pulseIn(echoPin, HIGH);
    float distance = (0.0343 * duration)/2;
    return distance;
};