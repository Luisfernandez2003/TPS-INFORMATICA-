#include <stdio.h>

// Función para multiplicar dos matrices 3x3
void productodeMatrices(const float matriz1[3][3], const float matriz2[3][3], float resultado[3][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			resultado[i][j] = 0;
			for (int k = 0; k < 3; ++k) {
				resultado[i][j] += matriz1[i][k] * matriz2[k][j];
			}
		}
	}
}

// Función para imprimir una matriz 3x3
void imprimirMatriz(const float matriz[3][3]) {
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%6.2f\t", matriz[i][j]); //para mantener las columnas en espacio de 6
		}
		printf("\n");
	}
}

int main() {
	float matriz1[3][3], matriz2[3][3], resultado[3][3];
	
	// Ingresar elementos para la primera matriz desde el usuario
	printf("Ingresa los elementos para la primera matriz 3x3:\n");
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("Elemento [%d][%d]: ", i + 1, j + 1);
			scanf("%f", &matriz1[i][j]);
		}
	}
	// Ingresar elementos para la segunda matriz desde el usuario
	printf("Ingresa los elementos para la segunda matriz 3x3:\n");
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("Elemento [%d][%d]: ", i + 1, j + 1);
			scanf("%f", &matriz2[i][j]);
		}
	}
	// Llamar a la función para multiplicar las matrices
	productodeMatrices(matriz1, matriz2, resultado);
	
	// Mostrar las matrices y el resultado
	
	printf("\nMatriz 1:\n");
	imprimirMatriz(matriz1);
	
	printf("\nMatriz 2:\n");
	imprimirMatriz(matriz2);
	
	printf("\nEl producto entre las matrices es:\n");
	printf("__________________________________\n");
	imprimirMatriz(resultado);
	
	return 0;
}
