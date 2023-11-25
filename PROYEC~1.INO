/*Este proyecto consiste en alternar y poder ver la información de la fecha y hora por una parte y por otra,
 la temperatura y la humedad cada cierto tiempo en un mismo display lcd como en el monitor serie.
  También se puede ampliar gracias al módulo de reloj para programar eventos en días especificos o 
  la utilización de alarmas inteligentes.*/

//Librerias del LCD 16x2 con controlador I2C. PINES: SCL=SCL; SDA=SDA 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

//SE AGREGA LIBRERÍAS PARA RTC DS1302
#include <Wire.h> 
#include <ThreeWire.h>  
#include <RtcDS1302.h>
//SE CREA Y CONFIGURA OBJETO PARA MANEJAR RTC DS1302
ThreeWire myWire(4, 5, 2); //PINES: DATA=4; CLK=5; RST=2
RtcDS1302<ThreeWire> Rtc(myWire);

#include <DHT.h>
#define DHTPIN 7        // PIN: D=7;
#define DHTTYPE DHT11   // Tipo de sensor DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  
  Serial.begin(9600);
 RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);
  printDateTime(compiled);
  Serial.println();

  lcd.init();     // Inicializar el LCD
  lcd.backlight();// Encender la iluminación
  Rtc.Begin();    // Inicializar el RTC
  dht.begin();    // Inicializar el DTH
}

void loop() {
  RtcDateTime now = Rtc.GetDateTime();
  printDateTime(now);

  // Lectura del sensor DHT11 cada 15 segundos
  if (now.Second() % 15 == 0) {
    float Humedad = dht.readHumidity();
    float Temperatura = dht.readTemperature();
    lcd.setCursor(0, 0);
    lcd.print("                ");  //Espacio para borrar lo anterior

    lcd.setCursor(0, 0);
    lcd.print("TEMP:    ");
    lcd.print(Temperatura);
    lcd.print(" C");

    lcd.setCursor(0, 1);
    lcd.print("                ");

    lcd.setCursor(0, 1);
    lcd.print("HUMEDAD: ");
    lcd.print(Humedad);
    lcd.print(" %");
    lcd.println();

    Serial.print("Temperatura: ");
    Serial.print(Temperatura);
    Serial.print("C°, Humedad: ");
    Serial.print(Humedad);
    Serial.println("%");
    delay(5000); //Espera de lectura, 5seg
    
  }
  Serial.println();
  delay(1000);
}

#define countof(a) (sizeof(a) / sizeof(a[0]))
//Crea el formato de lectura para los datos
void printDateTime(const RtcDateTime& dt) {
  char datestring[20];
  snprintf_P(datestring,
              countof(datestring),
              PSTR("%02u/%02u/%04u %02u:%02u:%02u"),
              dt.Day(),
              dt.Month(),              
              dt.Year(),
              dt.Hour(),
              dt.Minute(),
              dt.Second());
  lcd.setCursor(0, 0);
  lcd.print("DIA:  ");
  lcd.print(dt.Day());
  lcd.print("/");
  lcd.print(dt.Month());
  lcd.print("/");
  lcd.print(dt.Year());
  lcd.setCursor(0, 14);
  lcd.print(" ");
  lcd.setCursor(0, 1);
  lcd.print("HORA:  ");
  lcd.print(dt.Hour());
  lcd.print(":");
  lcd.print(dt.Minute());
  lcd.print(":");
  lcd.print(dt.Second());
  lcd.print("                "); //Espacio para borrar lo anterior
  Serial.print(datestring);
  
}