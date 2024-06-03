/*Permitir el ingreso de una clave numerica entera. 
Finalizar el ingreso solamente cuando la clave ingresada sea 23645*/

#include<stdio.h>

int main ()
{
	int clave;
	int intentos = 0;
	
	do 
	{
		printf("Ingresa clave valida: ");
		scanf("%d", &clave);
		intentos++;
		
		if (intentos == 3){
			printf("Ingreso varias veces la clave invalida");
			break;
			intentos = 0;
		}
		
		
	}
	while (clave != 23645);
	
	printf("INGRESO EXITOSO");
}