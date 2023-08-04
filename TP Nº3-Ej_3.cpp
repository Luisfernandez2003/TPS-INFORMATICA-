#include <stdio.h>
#include <math.h>
#define PI 3.1415

float x = 0, y = 0;
float dx= (PI*4)/50;

int main(){
	printf("los 50 valores para la función son: \n\n");
    printf("X\t  Y\n");
for(int k=0; k<=50; k++ ){
    y = sin(x) + 0.7*cos(2*x) + 0.5*sin(3*x);
    printf("%.4f\t  %.4f\n", x, y );
    x= x+dx;
    }
return 0;
}
