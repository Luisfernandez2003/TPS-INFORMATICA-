#include <stdio.h>
#include <conio.h>

float sumador=0, promedio, numero;

int main(){
	for(int i=0; i<10; i++)
	{
		printf("Ingrese diez numeros reales:");
		scanf("%f",&numero);
		sumador=sumador+numero;
	}
	promedio=sumador/10;
	printf("\n El promedio de los 10 numeros es: %.2f\n",promedio);

return 0;
}
