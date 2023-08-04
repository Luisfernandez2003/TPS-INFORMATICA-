#include <stdio.h>
#include <conio.h>

int i;
float num;
float b=1;

int main(){

	printf( "\nIntroduzca el N numero: " );
	scanf( "%f", &num);
	
	for(i=1; i<=num; i++){
		b=i*b;
	}
	printf( "\nEl resultado factorial de N es: %2.f" ,b);
	
return 0;
}
