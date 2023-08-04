#include <stdio.h>
#include <math.h>

void ecuacion_cuadratica(float a, float b, float c, int raiz_deseada) {
	float discriminante = b*b - 4*a*c;
	if(discriminante < 0) {
		printf("La ecuación cuadrática no tiene soluciones reales.");
		return;
	}
	float x1 = (-b + sqrt(discriminante)) / (2*a);
	float x2 = (-b - sqrt(discriminante)) / (2*a);
	if(raiz_deseada == 1) {
		printf("La primera solución es %f", x1);
	} else if(raiz_deseada == 2) {
		printf("La segunda solución es %f", x2);
	} else {
		printf("La solución seleccionada no es válida");
	}
}
int main() {
	float a, b, c;
	int raiz_deseada;
	printf("Ingrese el coeficiente a: ");
	scanf("%f", &a);
	printf("Ingrese el coeficiente b: ");
	scanf("%f", &b);
	printf("Ingrese el coeficiente c: ");
	scanf("%f", &c);
	printf("Seleccione la raíz deseada (1 o 2): ");
	scanf("%d", &raiz_deseada);
	ecuacion_cuadratica(a, b, c, raiz_deseada);
	return 0;
}
