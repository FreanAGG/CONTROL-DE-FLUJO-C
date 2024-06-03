/*Se ingresaran 100 numeros enteros. Sumar los de orden impar 1, 3, 5... por un lado y los de orden par 2, 4, 6... por otro
Determinar cuales proporcionan la mayor suma // (CONTROL DE FLUJO)*/ 

#include <stdio.h>
#define N 5

int main ()
{
	int i, num, impar= 0, par = 0, total;
	
	for (i = 0 ; i < N; i++){
		
		printf("INGRESE NUMEROS ENTEROS: ");
		scanf("%d", &num);
		
		if(num % 2 == 0){
			par+=num;
		}
		else {
			impar+=num;
		}
	}
	
	if (par > impar){
		printf("Los pares proporcionan la mayor suma");
	}
	else{
		printf("Los impares proporcionan la mayor suma");
	}
}