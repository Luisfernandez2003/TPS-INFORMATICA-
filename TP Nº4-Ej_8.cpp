#include <stdio.h>
#include <math.h>

int i,contador, A[37]; //arreglo de 36 para los valores enteros de x.
float S[37]; // arreglo de 36 para la F(y). 

int main() {
	
	printf("Los Valores para la tabla son: \n\nGrados: \t Función: \n");
	printf("__________________________\n");
	for (i=0; i<=360; i=i+10){
		A [contador] = i;
		S [contador] = sin(i);
		contador++;
	}		
	for(i=0; i<37; i++){
		printf(" %d \t\t %.4f\n",A[i], S[i]); //mostramos solo 4 decimales para el float.
	}
return 0;
}
