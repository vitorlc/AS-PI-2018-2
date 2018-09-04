#include <stdio.h>
#include <stdlib.h>

/* 
3. Escreva um programa em C que leia um número (num) que servirá para controlar os primeiros números ímpares. 
Além de imprimir os números ímpares, deve ser impressa a soma deles. Suponha que num será maior que zero. 
 */

int main() {
	
	int num, i, soma=0;
	
	printf("Digite o valor numeros impares a serem impressos e somados:  \n ");
	scanf("%d",&num);
	printf("\n Numeros impares ate %d : \n", num);
	
	for(i=1; i<=num; i++){
		if (i%2!=0){
			
			printf("%d ", i);
			printf("\n");
			
			soma = soma + i;
		}	
	}
	printf("A soma dos numeros impares e: %d ", soma);
	
	system("pause");
	return 0;
}
