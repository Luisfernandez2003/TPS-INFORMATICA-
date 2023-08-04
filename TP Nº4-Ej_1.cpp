#include <stdio.h>
#include <math.h>

int i;
float num [5]; float error [5];
float suma,promedio,total,sumadelerror,raiz;

int main(){
	
	for(i=0; i<5; i++){
		printf("\n Ingrese 5 valores enteros:");
		scanf("%f", &num[i]);
		suma = suma+num[i];
	}
	promedio = suma/5;
	for(i=0; i<5; i++){
		error[i] = num[i]-promedio;
		error[i] = error[i]*error[i];
		sumadelerror = sumadelerror + error[i];
	}
	raiz = sumadelerror/5;
	total = sqrt(raiz);
	printf("\n El promedio es: %.3f ", promedio);
	printf("\n El valor cuadratico medio del error respecto al promedio es: %.3f ", total);
	
return 0;	
}
