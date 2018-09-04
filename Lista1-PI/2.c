#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
