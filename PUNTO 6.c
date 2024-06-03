/*Determinar si un numero entero positivo ingresado por teclado es o no un numero perfecto. 
Los numeros perfectos son aquellos cuyo valor es igual a la suma de todos sus divisores exactos
con exepcion del mismo numero, por ejemplo 6 =  1 + 2 + 3*/


#include <stdio.h>

int main ()
{
	int nro, i, suma, condicion;
	
	
	
	do{
		printf("Ingrese un numero entero positivo: ");
		scanf("%d", &nro);
		suma = 0;
		
		for( i = 1 ; i < nro; i++)
			if(nro%i==0)
			suma+=i;							// suma = suma + i
			if(suma==nro)
			printf("%d Es perfecto\n", nro);
			else
			printf("No es perfecto\n");
	}
	while (nro > 0);
	
	return 0;
}