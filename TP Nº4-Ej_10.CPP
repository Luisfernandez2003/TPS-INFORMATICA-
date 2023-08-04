#include <stdio.h>
#include <string.h>

int main() {
	char cadena[100];
	printf("Ingrese una cadena: ");
	gets(cadena);//Lee la cadena y la guarda en una cadena llamada cadena
	strrev(cadena);//Funcion que invierte la cadena
	printf("La cadena al reves es: %s",cadena);
	return 0;
}
