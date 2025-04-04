#include <SD.h>     
#include <SPI.h>
#include <Arduino.h>
#include <hp_BH1750.h>

hp_BH1750 sens1;
hp_BH1750 sens2;

unsigned int lux1, lux2;
File plik;

void setup() {
  Serial.begin(9600);
  Serial.println("Uruchomiono");

  if (!sens1.begin(BH1750_TO_VCC) || !sens2.begin(BH1750_TO_GROUND)) {
    Serial.println("Błąd inicjalizacji sensorów");
    return;
  }

  sens1.calibrateTiming();
  sens2.calibrateTiming();

  sens1.start(BH1750_QUALITY_HIGH2, BH1750_MTREG_DEFAULT);
  sens2.start(BH1750_QUALITY_HIGH2, BH1750_MTREG_DEFAULT);

  if (!SD.begin(4)) {
    Serial.println("Problem z inicjalizacją karty SD");
    return;
  }

  Serial.println("Zainicjalizowano kartę SD");

  plik = SD.open("Pomiar_15_07.txt", FILE_WRITE);
  if (!plik) {
    Serial.println("Problem z otwarciem pliku");
    return;
  }
}

void loop() {
  lux1 = sens1.getLux();
  lux2 = sens2.getLux();

  Serial.print("Light sensor 1: ");
  Serial.println(lux1);
  
  Serial.print("Light sensor 2: ");
  Serial.println(lux2);

  plik.print("Sensor 1: ");
  plik.println(lux1);
  plik.print("Sensor 2: ");
  plik.println(lux2);

  if (!plik) {
    Serial.println("Błąd zapisu do pliku");
  }

  delay(12000);
}
