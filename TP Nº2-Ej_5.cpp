#include <stdio.h>

int cantidad,num,i,max, min;

int main(){
	
	printf( "\nIntroduzca la cantidad de numeros que desea ingresar: " );
	scanf( "%d", &cantidad);
	for(i=1; i<=cantidad; i++){
		if(i == 1){
			printf( "\nIntroduzca el numero: " );
			scanf( "%d", &num);
			
			min = num;
			max = num;
		}
		else{
			printf( "\nIntroduzca el numero: " );
			scanf( "%d", &num);
			if(num>max){
				max=num;
			}
			else if(num<min){
				min=num;
			}
		}
	}
	printf("\nNumero Max: %d  \nNumero Min: %d",max,min );
	return 0;
}
