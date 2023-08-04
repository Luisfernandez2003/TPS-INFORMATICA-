#include <stdio.h>
#define pi 3.14

double calcular(float radio, int opcion){
	float longitud, area, volumen;
	
	if(opcion == 1){
		longitud = 2 * pi * radio;
		return longitud;
	}
	else if(opcion == 2){
		area = pi * (radio * radio);
		return area;
	}
	else if(opcion == 3){
		volumen = 4 / 3 * pi * (radio * radio * radio);
		return volumen;
	}
return 1;
}
	
	int main(){
		float radio;
		int opcion;
		float calculo = calcular(radio, opcion);
		
		printf("\n Ingrese el radio: ");
		scanf("%f", &radio);
		
		printf("\n Opciones: \n");
		printf("\n (1) Longuitud de la circunferencia ");
		printf("\n (2) Area del circulo ");
		printf("\n (3) Volumen de la esfera ");
		printf("\n\n Ingrese una opcion del 1 al 3: ");
		scanf("%d", &opcion);
		
		
		printf("\nEl resultado es: %.4f", calculo);
		
		return 0;
	}
