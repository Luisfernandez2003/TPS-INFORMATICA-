#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	int contador=0;
	for(int i=0; i<10; i++)
	{
		printf("Ingrese 10 numeros enteros:");
		scanf("%d",&num);
		if(num % 3 == 0){
			contador++;
		}
	}
	printf("\n La cantidad de numeros divisibles por tres es: %d",contador);
	return 0;
}
