#include <stdio.h>
#include <math.h>

float vectores(float x1, float x2, float y1, float y2){
	float vector = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	return vector;
}

	
	int main(){	float x1,x2,y1,y2;
		
		printf("\n Ingrese X1: ");
		scanf("%f", &x1);
		
		printf("\n Ingrese Y1: ");
		scanf("%f", &y1);
		
		printf("\n Ingrese X2: ");
		scanf("%f", &x2);
		
		printf("\n Ingrese Y2: ");
		scanf("%f", &y2);
		
		printf("\n La distancia entre dos puntos en el plano es: %.4f", vectores(x1,x2,y1,y2));
		
	return 0;
	}
