#include <stdio.h>
#include <string.h>

// Función para unir cadenas
void unioncadenas(const char *cadena1, const char *cadena2, char *resultado) {
	// Copiar la primera cadena al resultado
	strcpy(resultado, cadena1);
	
	// Concatenar la segunda cadena al resultado
	strcat(resultado, cadena2);
}

int main() {
	char cadena1[100];  // Definir un array para la primera cadena
	char cadena2[100];  // Definir un array para la segunda cadena
	char resultado[200];  // Definir un array para el resultado de la unión
	
	// Ingresar las dos cadenas desde el usuario
	printf("Ingrese la primera cadena: ");
	scanf("%s", cadena1);  // %s para leer una cadena
	
	printf("Ingrese la segunda cadena: ");
	scanf("%s", cadena2);
	
	// Llamar a la función para unir las cadenas
	unioncadenas(cadena1, cadena2, resultado);
	
	// Mostrar el resultado
	printf("El resultado de la cadena es: %s\n", resultado);
	
	return 0;
}
