/*Mostrar los primeros 5 numeros perfectos (CONTROL DE FLUJO)*/ 

#include <stdio.h>


int main ()
{
	int i, suma= 0 ;
	
	for ( i = 1 ; i < 10 ; i++){
		if ( i % i == 0){
			suma+=i;
			if (suma == i)
			printf("\n%d", i);
		}
	}
}