#include <stdio.h>
#include <math.h>

int  k,promedioimpar, promediopar, contadorpar = 0, contadorimpar = 0,arreglo [10], sumaimpar,sumapar;

int main() {
	
	for (k=0;k<10;k++){
		printf ("Ingrese el valor del arreglo: ");
		scanf ("%d", &arreglo[k]); 
		
		if(arreglo[k] %2 == 0){
			sumapar = sumapar + arreglo[k];
			//suma = suma + 1; se usa para lo mismo
			contadorpar++;
		}	
		else if(arreglo[k] %2 != 0){
			sumaimpar = sumaimpar + arreglo[k];
			contadorimpar++;
		}
	}
	
	promediopar = sumapar/contadorpar;
	promedioimpar = sumaimpar/contadorimpar;
	
	printf ("\n\n La suma de los indices impares es: %d", sumaimpar);
	printf ("\n\n La suma de los indices pares es: %d", sumapar);
	printf ("\n\n El promedio de los indices impares: es: %d", promedioimpar);
	printf ("\n\n El promedio de los indices pares es: %d", promediopar);
	return 0;
}

