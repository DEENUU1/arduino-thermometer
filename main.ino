#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>

#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);

void setup(void)
{
  sensors.begin();
  lcd.begin(16, 2);
  lcd.clear();
}
void loop(void)
{
  lcd.setCursor(0, 0);
  lcd.print("Temperatura:");
  lcd.setCursor(0, 1);

  sensors.requestTemperatures(); 

  lcd.print(sensors.getTempCByIndex(0));

  lcd.setCursor(6, 1);
  lcd.print("st. C");
  delay(1000);
}
