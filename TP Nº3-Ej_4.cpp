#include <stdio.h>
#include <math.h>

float k, derivada;

int main(){
	
	printf("\n Ingrese el valor para x: "); scanf("%f", &k);
	
	derivada= 2 * sin(k) * cos(k);
	
	printf("\n El valor de la derivada del punto %.2f es: %.2f", k, derivada);
	
return 0;
}
