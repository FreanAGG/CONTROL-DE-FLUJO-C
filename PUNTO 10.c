/*Ingresar 10 valores por teclado. Indicar cual fue el mayor y en que posicion entro. (CONTROL DE FLUJO)*/

#include <stdio.h>

int main ()
{
	int i, nro, acum = 0, mayor_numero= 0, cont = 0;
	
	for (i = 0 ; i < 5 ; i++){
		
		printf("VALOR = ");
		scanf("%d", &nro);
		
		if (nro > mayor_numero){
			mayor_numero = nro;
			cont++;
		}
	}
	
	printf("\nEl numero de mayor valor es %d", mayor_numero);
	printf("\nPosicion %d", cont);
}