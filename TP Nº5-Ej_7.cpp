#include <stdio.h>

int factorial(int numero){
int calculo = numero;
	for(int i = 1; i < numero; i++){
		calculo = calculo * i;
	}
return calculo;
}
int numero, nFactorial;

	int main(){
		
		printf("Ingrese un numero: ");
		scanf("%d", &numero);
		
		nFactorial = factorial(numero);
		
		printf("\n El factorial del numero ( %d ) es el argumento: %d", numero, nFactorial);
		
		return 0;
	}
