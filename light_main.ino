#include <SD.h>     
#include <SPI.h>
#include <Arduino.h>
#include <hp_BH1750.p>

hp_BH1750 sens1;
hp_BH1750 sens2;

unsigned int lux1, lux2;
bool ready1, ready2;
bool forceReading;
File plik;

void setup() {
  
  forceReading = True;
  Serial.begin(9600);
  Serial.println("");
  sens1.begin(BH1750_TO_VCC);
  sens2.begin(BH1750_TO_GROUND);

  sens1.calibrateTiming();
  sens2.calibrateTiming();

  sens1.start(BH1750_QUALITY_HIGH2, BH1750_MTREG_DEFAULT);
  sens2.start(BH1750_QUALITY_HIGH2, BH1750_MTREG_DEFAULT);

  while(!Serial){}
Serial.println("Uruchomiono");
if(!SD.begin(4)) {
  Serial.println("Problem z inicjalizacja karty");
  return;
}
  Serial.println("Zainicjalizowanie karte");
  plik = SD.open("Pomiar_15_07.txt", FILE_WRITE);

if(!plik)
  {
    Serial.println("Problem z otwarciem pliku");
  }
}
void loop() {
  lux1 = sens1.getLux();
  Serial.println("Light sensor 1: ");
  Serial.println(lux1);
  sens1.start();

  lux2 = sens2.getLux();
  Serial.println("Light sensor 2: ");
  Serial.println(lux2);
  sens1.start();

  plik.println(lux1 = sens1.getLux());
  plik.println(lux2 = sens2.getLux());

  ready1 = sens1.hasValue(forceReading);
  ready2 = sens2.hasValue(forceReading);
  delay(12000);

}

