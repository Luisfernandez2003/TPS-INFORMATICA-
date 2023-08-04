#include <stdio.h>
#include <string.h>
#define LargoMaximo 100

char cadena[100];
int contador=0;
int main() {

	printf("Ingrese una cadena: ");
	gets(cadena);//el gets lee mejor la cadena
	
	for(int i=0; i<strlen(cadena); i++){//devuele en numero la cantidad de caracteres, ejemplo Hola = 4.
		if((cadena[i]=='A')||(cadena[i]=='a')||
			(cadena[i]=='E')||(cadena[i]=='e')||
			(cadena[i]=='I')||(cadena[i]=='i')||
			(cadena[i]=='O')||(cadena[i]=='o')||
			(cadena[i]=='U')||(cadena[i]=='u')){//"||" (es como un or)se usa para tener varios argumentos en el if
			contador++;
		}
		
	}
	printf("\n cantidad de vocales son: %d", contador);
	
	return 0;
}
	
	
	
	
	
	

