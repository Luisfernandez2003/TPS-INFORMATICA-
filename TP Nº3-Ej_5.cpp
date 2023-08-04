#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int i;
float x, y, derivada;

int main(){
	
	for (i = 1; i <= 50; i++){
		x = i * 4 * pi / 49;
		y = sin(x);
		derivada = cos(x);
		printf("\n X = %.2f\t Y = %.2f\t", x, y);
		printf("La derivada del punto %.2f es %.2f\n", x, derivada);
	}
return 0;
}
