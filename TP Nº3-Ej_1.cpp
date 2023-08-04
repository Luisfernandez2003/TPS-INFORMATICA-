#include <stdio.h>

int operacion,radio;
float pi=3.14159265359; float vol=1.33333333; 
float circunferencia,area,volumen;


int main() {
	
	printf( "\n Introduzca el valor del radio: " );
	scanf( "%d", &radio );
	printf( "\n Opcion del calculo de la longitud de la circunferencia:(1) " );
	printf( "\n Opcion del calculo del área del círculo:(2) " );
	printf( "\n Opcion del calculo del volumen de la esfera:(3) ");
	printf( "\n Introduzca la operacion elegida: " );
	scanf( "%d", &operacion );
	
	if(operacion ==1){
		circunferencia=2*pi*radio;
		printf( "\n El valor de la circunferencia es: %.2f",circunferencia);
	}else if(operacion ==2){
		area=pi*radio*radio;
		printf( "\n El valor del area es: %.2f",area);
	}else if(operacion ==3){
		volumen=vol*pi*radio*radio*radio;
		printf( "\n El valor del volumen es: %.2f",volumen);
	}else{
		printf( "\n Se eligio una opcion inexistente");
	}
	return 0;
}
