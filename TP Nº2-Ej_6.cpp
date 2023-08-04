#include <stdio.h>
#include <conio.h>

float a=0,b=1,c,numero;
int i;

int main()
{
	printf( "\nIntroduzca el enesimo termino de la sucesion de Fibonacci: " );
	scanf( "%f", &numero);
	for(i=1; i<=numero ;i++){
		a=b;
		b=c;
		c=a+b;
	}
	printf("\n El numero%2.f de la sucesion de Fibonacci es: %2.f",numero,c);
}
