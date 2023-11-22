#include <stdio.h>
#include <math.h>

// Funci�n para calcular las ra�ces de la ecuaci�n cuadr�tica
// El discriminante es B�-4AC.
void calcularRaices(float a, float b, float c, float *raiz1, float *raiz2) {
	float discriminante = b*b - 4*a*c;
	
	// Si el discriminante es negativo, no hay ra�ces reales
	if (discriminante < 0) {
		*raiz1 = *raiz2 = 0;
		printf("No hay raices reales, solo imaginarias.\n");
	}
	// Si el discriminante es igual a cero, hay una ra�z real o dos iguales
	else if (discriminante == 0) {
		*raiz1 = *raiz2 = -b / (2*a);
		printf("Raiz unica o iguales: %.2f\n", *raiz1);
	}
	// Si el discriminante es positivo, hay dos ra�ces reales
	else {
		*raiz1 = (-b + sqrt(discriminante)) / (2*a);
		*raiz2 = (-b - sqrt(discriminante)) / (2*a);
		printf("Raiz 1: %.2f\nRaiz 2: %.2f\n", *raiz1, *raiz2);
	}
}

int main() {
	float a, b, c;
	float raiz1, raiz2;
	
	printf("Ingrese los coeficientes de la ecuaci�n cuadratica:\n");
	printf("Ingresar el coeficiente A: ");
	scanf("%f", &a);
	printf("Ingresar el coeficiente B: ");
	scanf("%f", &b);
	printf("Ingresar el termino independiente C: ");
	scanf("%f", &c);
	
	calcularRaices(a, b, c, &raiz1, &raiz2);
	
	return 0;
}
