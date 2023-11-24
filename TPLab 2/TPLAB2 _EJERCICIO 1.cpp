#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3, 4,5, 6, 7); 
int Botoniniciador = 9; 
int Botoncero = 10;     
int horas = 0;
int minutos = 0;
int segundos = 0;
int decimas = 0;
int milisegundos = 0;


void setup() {
	pinMode(Botoniniciador, INPUT);
	pinMode(Botoncero, INPUT);
	Serial.begin(9600);
	lcd.begin(16,2);
	
}

void loop(){
	
	if(digitalRead(Botoncero) == HIGH){
		horas = 0;
		minutos = 0;
		segundos = 0;
		decimas = 0;
		lcd.clear();
	}
	
	if(digitalRead(Botoniniciador) == HIGH){
		delay(200);
		while(digitalRead(Botoniniciador) == LOW);
		delay(200);
	}
	
	milisegundos = millis();
	
	if(milisegundos % 100 == 0){
		decimas ++;
		if(decimas == 10){
			decimas = 0;
			segundos ++; 
		}
		if(segundos==60){
			segundos=0;
			minutos++;
		} 
		if(minutos==60){
			minutos=0;
			horas++;
		}
		
		lcd.setCursor(6,0);
		lcd.print("HS ");
		lcd.print("MN ");
		lcd.print("SG ");
		lcd.print("D");
		
		lcd.setCursor(0,1);
		lcd.print("Time: ");
		
		lcd.setCursor(6,1);
		if(horas < 10){
			lcd.print("0");
		}
		lcd.print(horas);
		lcd.print(":");
		lcd.setCursor(9,1);
		if(minutos < 10){
			lcd.print("0");
		}
		lcd.print(minutos);
		lcd.print(":");
		lcd.setCursor(12,1);
		if(segundos < 10){
			lcd.print("0");
		}
		lcd.print(segundos);
		lcd.print(":");
		lcd.setCursor(15,1);
		lcd.print(decimas);
	}
}  
	
