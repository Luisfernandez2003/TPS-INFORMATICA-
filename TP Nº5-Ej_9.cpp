#include <stdio.h>
#include <math.h>

float vectores(float x1, float x2, float y1, float y2, float z1, float z2){
	float raiz=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) + (z1-z2)*(z1-z2));
	return raiz;
}
	
	int main(){
		float x1, x2, y1, y2, z1, z2;
		
		printf("\n Ingrese el valor de X_1: ");	scanf("%f", &x1);
		printf("\n Ingrese el valor de X_2: ");	scanf("%f", &x2);
		printf("\n Ingrese el valor de Y_1: ");	scanf("%f", &y1);
		printf("\n Ingrese el valor de Y_2: ");	scanf("%f", &y2);
		printf("\n Ingrese el valor de Z_1: ");	scanf("%f", &z1);
		printf("\n Ingrese el valor de Z_2: ");	scanf("%f", &z2);
		
		printf("\n La funcion que devuelve la distancia entre 2 puntos para x,y,z  es: %.4f", vectores( x1,x2,y1,y2,z1,z2));
		
		return 0;
	}
