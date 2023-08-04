#include <math.h>
#include <stdio.h>

int main()
{
	float coefa,coefb,coefc,raiz1,raiz2,resolvente;
	printf( "\n Introduzca el coeficiente a: " );
	scanf( "%f", &coefa );
	printf( "\n Introduzca el coeficiente b: " );
	scanf( "%f", &coefb );
	printf( "\n Introduzca el coeficiente c: " );
	scanf( "%f", &coefc );
	resolvente=coefb*coefb-4*coefa*coefc;
	if (resolvente>=0){
		raiz1=(-coefb+sqrt(resolvente))/(2*coefa);
		raiz2=(-coefb-sqrt(resolvente))/(2*coefa);
		printf ("raiz1= %.4f \n", raiz1);
		printf ("raiz2= %.4f \n", raiz2);
	}
	else {
		printf ("Se ingresaron raices complejas\n");
	}
	return 0;
}
