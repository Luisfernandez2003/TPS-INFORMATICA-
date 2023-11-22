#include <stdio.h>
#include <math.h>

int main() {
	//Puntero del tipo archivo
	FILE *archivo; 
	double x, y;
	
	
	// Abrir un archivo con la funci�n fopen para la escritura
	archivo = fopen("Columna de Datos.txt", "w");
	
	// Verificar si el archivo se abri� correctamente
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo.\n");
		return 1; 
	}
	
	// Escribir en el archivo
	fprintf(archivo, "Valor_X\t Valor_Funcion\n");
	for (int i = 0; i <= 80; ++i) {
		x = i * (8 * 3.1415) / 80.0; 
		y = pow(sin(x), 2); // funcion pow (potencia (valor, exponente))de la lib math.h
		fprintf(archivo, "%.4f\t%.4f\n", x, y); // Guardar los valores en el archivo de texto, formato columna
	}
	
	// Cerrar el archivo
	fclose(archivo);
	
	return 0;
}
