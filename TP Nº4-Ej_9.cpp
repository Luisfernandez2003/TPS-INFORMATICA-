#include <stdio.h>
#include <math.h>

float S[37], A[37], P[37], x, rad;

int main(){
	printf("Grados\t|  Funcion Sen\t | Prom de la función\n");
	printf("_____________________________________________\n");
	
	for(int i = 0; i < 37; i++){
		x = i * 10;
		rad = x * (M_PI / 180);
		S[i] = sin(rad);
		A[i] = x;
	}
	for(int i = 0; i < 37; i++){
		P[i] = (S[i] + S[i+1] + S[i+2]) / 3;
	}
	for(int i = 0; i < 37; i++){
		printf(" %0.0f\t|\t%0.3f\t |\t%0.2f\n", A[i], S[i], P[i]);
	}  
return 0;
}
