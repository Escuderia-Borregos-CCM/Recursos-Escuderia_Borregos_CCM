#include "LCDManager.h"

LCDManager::LCDManager(uint8_t adress, uint8_t cols, uint8_t rows): lcd(adress, cols, rows){};
void LCDManager::begin(){
    lcd.init();
    lcd.backlight();
};

void LCDManager::printLine(uint8_t line, String text){
    lcd.setCursor(0,line);
    lcd.print("                       ");
    lcd.setCursor(0, line);
    lcd.print(text);
}


