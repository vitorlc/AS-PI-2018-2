#include <stdio.h>
#include <stdlib.h>

/* 
3. Escreva um programa em C que leia um n�mero (num) que servir� para controlar os primeiros n�meros �mpares. 
Al�m de imprimir os n�meros �mpares, deve ser impressa a soma deles. Suponha que num ser� maior que zero. 
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
