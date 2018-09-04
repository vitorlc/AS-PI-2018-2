#include <stdio.h>
#include <stdlib.h>

/* 
5. Escreva um programa em C que leia os limites inferior e superior de um intervalo e calcule a soma dos números no intervalo fechado. 
Deve-se efetuar teste para garantir que o limite superior seja maior ou igual ao limite inferior. Ao final, deve-se imprimir a soma calculada.
 */

int main() {
	
	int limitinf, limitsup, i, soma;
	
	printf("Digite o valor do limite inferior:  \n ");
	scanf("%d",&limitinf);
	printf("Digite o valor do limite superior:  \n ");
	scanf("%d",&limitsup);
		
	if(limitsup>limitinf){
		for(i=limitinf; i<=limitsup; i++){
			soma = soma+i;	
		}
		printf("Soma dos valores dos limites: %d\n ", soma-1);	
	}else{
		printf("Valores de limites incorretos\n ");
	}	
	
	
	system("pause");
	return 0;
}
