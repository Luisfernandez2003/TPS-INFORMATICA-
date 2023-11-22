#include <stdio.h>

// Función para contar la cantidad de veces que aparece una letra en una cadena
int contarLetraEnCadena(char letra, const char *cadena) {
	int contador = 0;
	
	while (*cadena != '\0') {
		// Comparar la letra actual con la letra proporcionada
		if (*cadena == letra) {
			contador++;
		}
		
		cadena++;
	}
	
	return contador;
}

int main() {
	char letra;
	char cadena[100];
	
	printf("Ingresa una letra: ");
	scanf(" %c", &letra);  // Leer la letra con un espacio antes de %c para ignorar espacios en blanco
	
	printf("Ingresa una cadena de caracteres: ");
	scanf("%s", cadena);
	
	// Llamar a la función para contar la letra en la cadena
	int cantidad = contarLetraEnCadena(letra, cadena);
	
	printf("La letra '%c' se repite %d veces en la cadena.\n", letra, cantidad);
	
	return 0;
}
