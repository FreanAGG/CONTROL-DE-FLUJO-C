/*Ingresa por teclado un entero decimal positivo. Mostrarlo en pantalla en binario.*/

#include <stdio.h>

int main ()
{
	int nro, resto, resultado = 0, cont = 1;
	
	printf("INGRESE UN NUMERO DECIMAL POSITIVO ENTERO: ");
	scanf("%d", &nro);
	
	while (nro !=0)
	{
		resto = nro % 2;
		resultado = resultado + resto * cont;
		
		nro = nro / 2;
		cont=cont*10;
	}
	
	printf("\nResultado binario: %d", resultado);
}