#include <Arduino.h>

#include <LiquidCrystal.h>
#include <DHT.h>

const int TEMPERATURE_PIN = 13;
DHT dht11(TEMPERATURE_PIN, DHT11);
const int GAS_PIN = A0;

const int RW = 11;
const int RS = 12;
const int ENABLE = 2;
const int DI = 12;
const int DB[]= {3,4,5,6,7,8,9,10};
int i = 0;

LiquidCrystal lcd(RS, RW,ENABLE, DB[0],DB[1],DB[2],DB[3],DB[4],DB[5],DB[6],DB[7]);

void setup (void) {
    lcd.begin(16,2);
    lcd.print("hello, world!");
    pinMode(TEMPERATURE_PIN, OUTPUT);
    dht11.begin();
    Serial.begin(9600); 
}

void loop (void) {
    int v = analogRead(GAS_PIN);
    Serial.println(v, DEC);
    float temperature = dht11.readTemperature();
    float humidity = dht11.readHumidity();
    lcd.clear();
    lcd.print("Humidity: ");
    lcd.print(humidity);
    lcd.print("%  \t");
    lcd.setCursor(0,1); // \t - це символ табуляції для гарного форматування
    lcd.print("Temperature: ");
    lcd.print(temperature);
    lcd.print(" *C");
                        //Clean the display    
    delay(5000);
    lcd.clear();
    delay(2000);

    lcd.setCursor(0,0);
    lcd.print("Gas level: ");
    lcd.print(v);            //Start on position column 0 and row 0
    delay(5000);


}

