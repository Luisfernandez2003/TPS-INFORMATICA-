#include <stdio.h>
#include <math.h>
	
	double funcion(double x) {
	return pow(sin(x), 2);
}
	
	double calcularArea(double x1, double x2, int n) {
		double base = (x2 - x1) / n;
		double suma = 0.0;
		
		for (int i = 0; i < n; i++) {
			double x = x1 + (i + 0.5) * base;
			suma += funcion(x);
		}
	return suma * base;
	}
	
	int main() {
		double x1, x2;
		int n;
		
		printf("Ingrese el valor de X1: ");	scanf("%lf", &x1);
		
		printf("Ingrese el valor de X2: ");	scanf("%lf", &x2);
		
		printf("Ingrese el número de rectángulos (n): ");	scanf("%d", &n);
		
		if (x1 >= x2 || n <= 0) {
			printf("Entrada no válida.\n");
			return 1;
		}
		
		double area = calcularArea(x1, x2, n);
		
		printf("\nEl area bajo la curva de la función y=sen2(x) entre X1 y X2 es: %lf\n", area);
		
	return 0;
	}
