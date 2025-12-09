#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include <Arduino.h>

class UltrasonicManager{
    private:
        int trigPin;
        int echoPin;
    public:
        UltrasonicManager(int trig, int echo);
        void begin();
        float getDistanceCM();
};

#endif