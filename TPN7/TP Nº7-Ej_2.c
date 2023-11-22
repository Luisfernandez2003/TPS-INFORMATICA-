#include <stdio.h>
#include <math.h>

int main() {
	
	FILE *archivo;
	double Valor_muestra;
	double suma = 0.0;
	double sumaCuadrados = 0.0;
	double promedio;
	double errorCuadraticoMedio;
	int cantidadMuestras = 20;
	
	// Abrir el archivo para su lectura
	archivo = fopen("Muestras.txt", "r");
	
	// Verificar si el archivo se abrió correctamente
	if (archivo == NULL) {
		printf("No se pudo abrir o no existe el achivo 'Muestras.txt'.\n");
		return 1;
	}
	// Lee las 20 muestras y las calcula
	for (int i = 0; i < cantidadMuestras; ++i) {
		// Leer el valor de muestra desde el archivo
		fscanf(archivo, "%lf", &Valor_muestra);
		
		suma += Valor_muestra;
		sumaCuadrados += Valor_muestra * Valor_muestra;
	}
	
	// Valor promedio
	promedio = suma / cantidadMuestras;
	
	// Valor cuadrático medio de error
	errorCuadraticoMedio = sqrt(sumaCuadrados / cantidadMuestras - promedio * promedio);
	
	// Cerrar el archivo
	fclose(archivo);
	
	// Mostrar los resultados
	printf("Promedio: %.2f\n", promedio);
	printf("Valor cuadratico medio del error: %.2f\n", errorCuadraticoMedio);
	
	return 0;
}
