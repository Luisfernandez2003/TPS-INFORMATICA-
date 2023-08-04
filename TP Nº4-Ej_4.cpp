#include <stdio.h>

int k, nota;
int contador[11]={0};//se contempla el 0 como un dato que se almacena

int main() {
	for (k=0; k<15; k++){
		printf("\n Ingrese las 15 notas del 1 al 10: " );
		scanf("%d", &nota);
		if (0<=nota && nota<=10){
			contador[nota]++;
		}
		else{k--, printf("\n error, repetir nota!"); }//le resta el valor erroneo para volver a la condiciòn anterior.
	}
	for (k=0; k<=10; k++) {
		printf("\n Cantidad de alumnos con notas iguales del 0 al 10, con nota de: %d = %d",k, contador[k]);
	}
}
