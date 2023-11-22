#include <stdio.h>

// Función para el determinante de una matriz 3x3 (regla de sarrus)
float calcularDeterminante(float matriz[3][3]) {
	float determinante;
	
	determinante = 
	matriz[0][0] * matriz[1][1] * matriz[2][2] +
	matriz[1][0] * matriz[2][1] * matriz[0][2] +
	matriz[2][0] * matriz[0][1] * matriz[1][2] -
	matriz[0][2] * matriz[1][1] * matriz[2][0] -
	matriz[1][2] * matriz[2][1] * matriz[0][0] -
	matriz[2][2] * matriz[0][1] * matriz[1][0];
	
	return determinante;
}

int main() {
	float matriz[3][3];
	
	// Ingresar los elementos de la matriz 3x3
	printf("Ingrese los elementos de la matriz 3x3:\n");
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("Elemento [%d][%d]: ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	// Calcular y mostrar el determinante
	float determinante = calcularDeterminante(matriz);
	printf("El determinante de la matriz es: %.2f\n", determinante);
	
	return 0;
}
