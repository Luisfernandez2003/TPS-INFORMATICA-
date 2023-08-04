#include <stdio.h>

char op;
int radio;
float pi=3.14159265359; float vol=1.33333333;
float circunferencia,area,volumen;

int main(){
	
	printf( "\n Introduzca el valor del radio: " );
	scanf( "%d", &radio );
	scanf( "%c", &op);//Se usa porque el enter entra como caracter
	printf( "\n Opcion del calculo de la longitud de la circunferencia:(a) ");
	printf( "\n Opcion del calculo del área del círculo:(b) ");
	printf( "\n Opcion del calculo del volumen de la esfera:(c) ");
	printf( "\n Introduzca la operacion elegida: " );
	scanf( "%c", &op);//Tiene doble lectura porque al usar el enter lo toma como una variable
	switch (op)
	{
	case 'a': //Se usa las comillas simples porque se toman valores de char, para otra variable no se usa
		circunferencia=2*pi*radio;
		printf("\n El valor de la circunferencia es: %.2f",circunferencia);
		break;
	case 'b': 
		area=pi*radio*radio;
		printf("\n El valor del area es: %.2f",area);
		break;
	case 'c': 
		volumen=vol*pi*radio*radio*radio;
		printf("\n El valor del volumen es: %.2f",volumen);
		break;
	default: 
		printf("\nOperador no valido\n");
	}
	return 0;
}
