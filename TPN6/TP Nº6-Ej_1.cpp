#include <stdio.h>
#include <math.h>

// Función para convertir de rectangular a polar
void rectangularAPolar(float real, float imaginario, float *Vector_r, float *angulo) {
	*Vector_r = sqrt(real * real + imaginario * imaginario);
	*angulo = atan2(imaginario ,real); /*
	"atan2" es lo mismo que tg^-1 o arctang y esta funcion no se limita a usar b/a,
	sino que lo calcula en radianes directo como: grados= radianes X 180/phi
}*/
}
// Función para convertir de polar a rectangular
void polarARectangular(float Vector_r, float angulo, float *real, float *imaginario) {
	*real = Vector_r * cos(angulo);
	*imaginario = Vector_r * sin(angulo);
}

int main() {
	float a, b, Vector_r, angulo;
	
	printf("Elija una opción de conversión:\nRectangular a Polar (A) o Polar a Rectangular (B): ");
	char opcion;
	scanf(" %c", &opcion); printf("\n");
	
	if (opcion == 'A' || opcion == 'a') {
		printf("Ingrese la parte real_X: ");
		scanf("%f", &a);
		printf("Ingrese la parte imaginaria_Y: ");
		scanf("%f", &b);
		
		rectangularAPolar(a, b, &Vector_r, &angulo);
		
		printf("La forma polar es: %.2f Vector_r < %.2f radianes\n", Vector_r, angulo);
	} else if (opcion == 'B' || opcion == 'b') {
		printf("Ingrese el Vector_r: ");
		scanf("%f", &Vector_r);
		printf("Ingrese el ángulo en radianes: ");
		scanf("%f", &angulo);
		
		polarARectangular(Vector_r, angulo, &a, &b);
		
		printf("La forma rectangular es: %.2f + %.2fi\n", a, b);
	} else {
		printf("Opción no válida\n");
	}
	
	return 0;
}
