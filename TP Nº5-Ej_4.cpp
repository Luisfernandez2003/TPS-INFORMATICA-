#include <stdio.h>

int encontrar_menor(int num1, int num2, int num3) {
	int menor = num1;
	if (num2 < menor) {
		menor = num2;
	}
	if (num3 < menor) {
		menor = num3;
	}
	return menor;
}
int main() {
	int num1, num2, num3, menor;
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	printf("Ingrese el tercer número: ");
	scanf("%d", &num3);
	menor = encontrar_menor(num1, num2, num3);
	printf("El menor número es %d", menor);
	return 0;
}
