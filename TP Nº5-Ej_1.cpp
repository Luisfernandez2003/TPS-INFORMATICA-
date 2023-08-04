#include <stdio.h>

float mi_potencia(float base, int exponente) {
	float resultado = 1;
	if(exponente < 0) {
		base = 1 / base;
		exponente = -exponente;
	}
	for(int i = 0; i < exponente; i++) {
		resultado *= base;
	}
	return resultado;
}

int main() {
	float base;
	int exponente;
	printf("Ingrese la base: ");
	scanf("%f", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &exponente);
	float resultado = mi_potencia(base, exponente);
	printf("%f elevado a la %d es igual a %f", base, exponente, resultado);
	return 0;
}
