#include <stdio.h>
#include <stdlib.h>

/* 
4. Escreva um programa em C que leia um número e imprima todos os seus divisores.
 */

int main() {
	
	int num, i, divisor, resultado;
	
	printf("Digite o valor do numeros:  \n ");
	scanf("%d",&num);
		
	for(i=1; i<=num; i++){
		divisor+=1;
		resultado = num % divisor;
		if (resultado == 0){
			printf("E divisivel por: %d \n", divisor);
			printf("\n");
		}	
	}	
	system("pause");
	return 0;
}
