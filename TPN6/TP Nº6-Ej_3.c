#include <stdio.h>

void intercambio(int* x1, int* x2) {
	int temp = *x1;
	*x1 = *x2;
	*x2 = temp;
}

int main() {
	int X1;
	int X2;
	printf("Ingresar el valor de X1:");
	scanf("%d", &X1);
	printf("Ingresar el valor de X2:");
	scanf("%d", &X2);
	
	printf("Antes de intercambiar:\n");
	printf("X1 = %d\n", X1);
	printf("X2 = %d\n", X2);
	
	intercambio(&X1, &X2);
	
	printf("Después de intercambiar:\n");
	printf("X1 = %d\n", X1);
	printf("X2 = %d\n", X2);
	
	return 0;
}
