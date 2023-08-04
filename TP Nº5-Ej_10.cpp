#include <stdio.h>

int esBisiesto(int anualidad) {
	return ((anualidad % 4 == 0 && anualidad % 100 != 0) || (anualidad % 400 == 0));
}

int esFechaValida(int dia, int mes, int anualidad) {
	int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if (esBisiesto(anualidad)) {
		diasPorMes[2] = 29; // Febrero tiene 29 días
	}
	
	if (dia < 1 || dia > diasPorMes[mes] || mes < 1 || mes > 12 || anualidad < 1) {
		return 0;
	} else {
		return 1; 
	}
}

int main() {
	int dia, mes, anualidad;
	
	printf("Ingrese el día: ");	scanf("%d", &dia);
	
	printf("Ingrese el mes: ");	scanf("%d", &mes);
	
	printf("Ingrese el año: ");	scanf("%d", &anualidad);
	
	if (esFechaValida(dia, mes, anualidad)) {
		int numeroDia = 0;
		
		int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		
		if (esBisiesto(anualidad)) {
			diasPorMes[2] = 29; // Febrero tiene 29 días
		}
		
		for (int i = 1; i < mes; i++) {
			numeroDia += diasPorMes[i];
		}
		
		numeroDia += dia;
		
		printf("\nEl numero del dia anual es: %d\n", numeroDia);
	} else {
		printf("Fecha no valida.\n");
	}
	
	return 0;
}
