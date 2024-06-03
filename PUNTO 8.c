/*Simular el tiro de una moneda para 1, 10, 100, 1000 y 10000 intentos. 
Mostrar el procentaje de ocurrencia de cara y seca.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int i, caras = 0, secas = 0, tiro;
	srand(time(0));
	
	
	for(i = 0; i < 10; i++)
	{
		tiro = rand()%2 + 1;
		
		if (tiro == 1)
			caras++;
		else
			secas++;
	}
	
	printf("\n10 INTENTOS");
	printf("\nEl porcentaje de caras es de %.2f", caras/10.0);
	printf("\nEl porcentaje de secas es de %.2f", secas/10.0);
	
	for(i = 0; i < 100; i++)
	{
		tiro = rand()%2 + 1;
		
		if (tiro == 1)
			caras++;
		else
			secas++;
	}
	
	printf("\n\n100 INTENTOS");
	printf("\nEl porcentaje de caras es de %.2f", caras/100.0);
	printf("\nEl porcentaje de secas es de %.2f", secas/100.0);
	
		for(i = 0; i < 1000; i++)
	{
		tiro = rand()%2 + 1;
		
		if (tiro == 1)
			caras++;
		else
			secas++;
	}
	
	printf("\n\n1000 INTENTOS");
	printf("\nEl porcentaje de caras es de %.2f", caras/1000.0);
	printf("\nEl porcentaje de secas es de %.2f", secas/1000.0);
	
		for(i = 0; i < 10000; i++)
	{
		tiro = rand()%2 + 1;
		
		if (tiro == 1)
			caras++;
		else
			secas++;
	}
	
	printf("\n\n10000 INTENTOS");
	printf("\nEl porcentaje de caras es de %.2f", caras/10000.0);
	printf("\nEl porcentaje de secas es de %.2f", secas/10000.0);
	
}