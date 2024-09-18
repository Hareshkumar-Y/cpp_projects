#include <LiquidCrystalWired.h>

#include <LCDI2C_Generic.h>
#include <LCDI2C_Katakana.h>
#include <LCDI2C_Katakana_Symbols.h>
#include <LCDI2C_Katakana_Vietnamese.h>
#include <LCDI2C_Latin.h>
#include <LCDI2C_Latin_Symbols.h>
#include <LCDI2C_Latin_Vietnamese.h>
#include <LCDI2C_Multilingual.h>
#include <LCDI2C_Russian.h>
#include <LCDI2C_RussianLatin.h>
#include <LCDI2C_RussianLatin_Symbols.h>
#include <LCDI2C_RussianLatin_Vietnamese.h>
#include <LCDI2C_Russian_Symbols.h>
#include <LCDI2C_Russian_Vietnamese.h>
#include <LCDI2C_Symbols.h>
#include <LCDI2C_Vietnamese.h>

#include <LiquidCrystal_I2C.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);


const int irSensorPin = 2; 
const int buzzerPin = 8; 

// Variables
int personCount = 0; 
int sensorState = 0; 
int lastSensorState = 0; 

void setup() {
  
  pinMode(irSensorPin, INPUT); 
   pinMode(buzzerPin, OUTPUT);
  lcd.init();
  lcd.backlight(); 
  lcd.setCursor(0, 0);
  lcd.print("Person Count:");
  Serial.begin(9600); 
}

void loop() {
  
  sensorState = digitalRead(irSensorPin);


  if (sensorState != lastSensorState) {
    
    lastSensorState = sensorState;

    
    if (sensorState == HIGH) {
      personCount++;
      Serial.print("Person Count: ");
      Serial.println(personCount);
      digitalWrite(8,HIGH);
      lcd.setCursor(0, 1);
  lcd.print("Count: ");
  lcd.print(personCount);

    }
    delay(10);
    digitalWrite(8,LOW);

  }

  
  delay(50);
}
