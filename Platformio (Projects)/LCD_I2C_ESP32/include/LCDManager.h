#ifndef LCD_MANAGER_H
#define LCD_MANAGER_H

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

class LCDManager{
    private:
     LiquidCrystal_I2C lcd;
    public:
    LCDManager(uint8_t adress, uint8_t cols, uint8_t rows);
    void begin();
    void printLine(uint8_t line, String text);
};

#endif