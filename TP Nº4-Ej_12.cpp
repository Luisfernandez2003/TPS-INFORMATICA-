#include <stdio.h>
#include <string.h>

int main() {
	char cadena[100];
	printf("Ingrese una cadena: ");
	gets(cadena);//Lee la cadena 
	printf("La cadena encriptada es: ");
	for(int i = 0; i < strlen(cadena); i++){//strlen devuelve la longitud de una cadena de texto
		printf("%c", cadena[i] + 3);//le suma a cada caracter de la cadena 3 numeros
	}
return 0;
}
