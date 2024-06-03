/*Ingresar 10 valores por teclado. Indicar si esta secuencia es creciente (todo valor es mayor que el anterior)*/

#include <stdio.h>


int main ()
{
	int i, num, num_mayor = 0 ;
	int creciente = 0;
	
	for(i = 0 ; i < 4 ; i ++){
		printf("VALOR = ");
		scanf("%d", &num);
		
		if (num > num_mayor){
			num_mayor = num;
			creciente = 1;
		}
		else{
			creciente = 0;
		}
		
	}
	
	
		
	if(creciente == 1){
		printf("La secuencia es creciente");
	}
	else{
		printf("La secuencia no es creciente");
	}
}