#include <stdio.h>

float calcular_precio_con_descuento(float precio, float descuento) {
	float descuento_decimal = descuento / 100.0;
	float precio_con_descuento = precio * (1.0 - descuento_decimal);
	return precio_con_descuento;
}
int main() {
	float precio, descuento, precio_con_descuento;
	printf("Ingrese el precio de la compra: ");
	scanf("%f", &precio);
	printf("Ingrese el porcentaje de descuento: ");
	scanf("%f", &descuento);
	precio_con_descuento = calcular_precio_con_descuento(precio, descuento);
	printf("El precio con descuento es %.2f", precio_con_descuento);
	return 0;
}
