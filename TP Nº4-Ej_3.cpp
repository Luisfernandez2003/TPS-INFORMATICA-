#include <stdio.h>

int notas[10],i,notasuperior,notainferior;	
float promedionotas,sumanotas; 

int main() {
	
	for(i=0; i<10; i++){
		printf("\n ingresar las notas de los 10 alumnos:" );
		scanf("%d",&notas[i]);//como se va a guardar"d" y donde se va a guardar "el arreglo"
		
		sumanotas = sumanotas + notas[i];	
	}
	
	promedionotas = sumanotas/10;
	
	for(i=0; i<10; i++){
		if(notas[i] < promedionotas){
			notasuperior++;
		}
		else if(notas[i] >= promedionotas){
			notainferior++;
		}
	}
	printf("\n Promedio de las notas: %0.2f",promedionotas);//0.2f son los decimales
	printf("\n Notas mayores al promedio: %d",notasuperior);
	printf("\n Notas menores al promedio: %d",notainferior);
}

