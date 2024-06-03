/*Se ingresaran numeros enteros positivos. Determinar cuantos de estos son pares. 
El ingreso finalizara con un numero negativo.*/

#include <stdio.h>

int main ()
{
	int num, i = 1, cant_pares = 0;			//Si no se incializa la variable "pares" empieza a sumar de la basura.
	
	printf("Ingrese numeros enteros positivos\n");
	printf("El ingreso terminara cuando se ingrese un numero negativo.");
	printf("\n\n");
	
	//resto = num % 2;
	
	while (num >= 0){
		scanf("%d", &num);
		
		if (num % 2 == 0){
			cant_pares++;
		}
	}
	
	printf("La cantidad de numeros pares ingresados es: %d", cant_pares);
	
}