/*Se ingresaran numeros enteros hasta que se ingresa el 235 indicar cuantas veces ocurrio el ingreso del numero 23.*/

#include <stdio.h>

int main ()
{
	int num, contador = 0;
	
	printf("INGRESE NUMEROS ENTEROS: ");
	printf("\n\n");
	
	while (num != 235){
		scanf("%d", &num);
		
		if (num == 23){
			contador++;
		}
	}
	
	printf("Se ingreso %d veces el numero 23", contador);
}