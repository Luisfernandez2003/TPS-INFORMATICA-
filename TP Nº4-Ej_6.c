#include <stdio.h>
#include <math.h>
//Arreglos de 10 numeros ingresados que los ordena de mayor a menor
int main(){
	int numeros[10];
	int i;
	int k;
	int temp;
	printf("Ingrese 10 numeros enteros: \n");
	for(i=0; i < 10; i++){
		scanf("%d", &numeros[i]);
	}
	for(i=0; i <9; i++){
		for(k=0; k < 9-i; k++){
			if(numeros[k] < numeros[k+1]){
				temp = numeros[k];
				numeros[k] = numeros[k+1];
				numeros[k+1] = temp;
			}
		}
	}
	printf("Los numeros ordenados de mayor a menor: \n");
	for(i=0; i<10; i++){
		printf("%d	", numeros[i]);
	}
	return 0;
}
