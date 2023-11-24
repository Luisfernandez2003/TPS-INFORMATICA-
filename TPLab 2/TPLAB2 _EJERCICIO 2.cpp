#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
	Serial.begin(9600);
	lcd.begin(16, 2);
	lcd.print("coeficientes:");
}

void loop(){
	
	if (Serial.available() > 0) {
		float coefa, coefb, coefc;
		
		coefa = Serial.parseFloat();
		delay(10); 
		coefb = Serial.parseFloat();
		delay(10);
		coefc = Serial.parseFloat();
		
		float raiz = coefb*coefb-4*coefa*coefc;
		
		if (raiz > 0){
			
			float raiz1 = (-coefb + sqrt(raiz)) / (2 * coefa);
			float raiz2 = (-coefb - sqrt(raiz)) / (2 * coefa);
			
			
			lcd.clear();
			lcd.print("raiz 1 = ");
			lcd.print(raiz1);
			lcd.setCursor(0, 1);
			lcd.print("raiz 2 = ");
			lcd.print(raiz2);
			
		}
		
		else if (raiz == 0){
			float raiz1 = -coefb / (2 * coefa);
			lcd.clear();
			lcd.print("raiz 1 = raiz 2 = ");
			lcd.print(raiz1);
		} 
		else {
			lcd.clear();
			lcd.print("No hay raices reales");
		}
	}
}
	
