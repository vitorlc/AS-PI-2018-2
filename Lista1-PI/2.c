#include <stdio.h>
#include <stdlib.h>

/* 2. Escreva um programa em C que leia um n�mero que servir� para controlar a
quantidade de n�meros pares que ser�o impressos a partir de 2. */

int main() {
	
	int count, i;
	
	printf("Digite o valor numeros pares a serem impressos:  \n ");
	scanf("%d",&count);
	printf("\n Numeros pares ate %d : \n", count);
	for(i=1; i<=count; i++){
		if (i%2==0){
			printf("%d ", i);
			printf("\n");
		}	
	}
	
	system("pause");
	return 0;
}
