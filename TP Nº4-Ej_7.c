#include <stdio.h>

int main() {
	int n = 20; // número de números primos que queremos calcular
	int numeros_primos[20]; // arreglo para almacenar los números primos encontrados
	int contador_primos = 0;
	int candidato_a_primo = 2; 
	
	// un bucle para buscar los primeros n números primos
	while (contador_primos < n) {
		int es_primo = 1;
		// buscar un divisor no trivial para el candidato a primo
		for (int divisor = 2; divisor <= candidato_a_primo / 2; divisor++) {
			if (candidato_a_primo % divisor == 0) {
				es_primo = 0;
				break;
			}
		}
		// si el candidato a primo es primo, añadirlo al arreglo y actualizar contador_primos
		if (es_primo == 1) {
			numeros_primos[contador_primos] = candidato_a_primo;
			contador_primos++;
		}
		candidato_a_primo++; // pasar al siguiente candidato a primo
	}
	
	// mostrar los números primos y almacenarlos en el arreglo
	printf("Los primeros %d numeros primos son:\n", n);
	for (int i = 0; i < n; i++) {
		printf("%d ", numeros_primos[i]);
	}
	
	return 0;
}
