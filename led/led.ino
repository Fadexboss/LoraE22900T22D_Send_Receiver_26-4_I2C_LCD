#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

 

// LCD ekran nesnesi 
// ilk parametre bizim ledin modelin türü bunu şu linki çalıştırarak bulabilirsiniz (https://sites.google.com/view/elif-hoca-robotik/arduino-temelleri/ders-13-arduino-i2c-lcd-ekran-kullan%C4%B1m%C4%B1)
// 2. ve 3. parametreler led ekranın kaça kaç olduğunu söyler onu yazın
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
  Serial.begin(9600);
  // I2C iletişimi başlatılır
  Wire.begin();

  // LCD ekranın başlatılması
  lcd.init();
  
  // LCD ekranın açılması
  lcd.backlight();
  
  // Yazıların sola yaslanması
  
}

void loop()
{
  for (int i = 1; i <= 100; i++) {
    Serial.println(i);
    lcd.setCursor(5,0);
    lcd.print(i);
    delay(100);
  }


  lcd.setCursor(0,0);
  lcd.print("Hiz: ");
  lcd.setCursor(5,0);
  lcd.print(25);

  lcd.setCursor(0,1);
  lcd.print("Bat Sic: ");
  lcd.setCursor(9,1);
  lcd.print(26);
  
  lcd.setCursor(0,2);
  lcd.print("Bat Ger: ");
  lcd.setCursor(9,2);
  lcd.print(64);

  lcd.setCursor(0,3);
  lcd.print("Enrji M: ");
  lcd.setCursor(9,3);
  lcd.print(2.8);
}
