#include <stdio.h>

float calcular_requiv(float R1, float R2, float R3){
	float Requiv = 1/((1/R1)+(1/R2)+(1/R3));
	return Requiv;
}
int main(){
	float R1, R2, R3, Requiv;
	printf("Ingrese el valor de R1: ");
	scanf("%f",&R1);
	printf("Ingrese el valor de R2: ");
	scanf("%f",&R2);
	printf("Ingrese el valor de R3: ");
	scanf("%f",&R3);
	Requiv = calcular_requiv(R1, R2, R3);
	printf("La resistencia equivalente es %f", Requiv);
	return 0;
}
