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
	printf("Ingrese el primer n�mero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo n�mero: ");
	scanf("%d", &num2);
	printf("Ingrese el tercer n�mero: ");
	scanf("%d", &num3);
	menor = encontrar_menor(num1, num2, num3);
	printf("El menor n�mero es %d", menor);
	return 0;
}
