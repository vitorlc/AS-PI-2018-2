#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*1. Escreva um programa em C que calcule e imprima o valor de b elevado a n. O valor
de n deverá ser maior do que 1 e inteiro, e o valor de b maior ou igual a 2 e inteiro.*/

int main() {
	
	int b, n, resultado;
	
	printf("Digite o valor de b (Maior ou iqual a 2): \n ");
	scanf("%d", &b);
	printf("Digite o valor de n (Maior que 1): \n ");
	scanf("%d", &n);
	
	if (b>=2 && n>1){
		resultado = pow(b,n);
		printf("Resultado de b ^ n e : %d \n", resultado);
	}else {
		printf("Os Valores informados estão incorretos \n");
	}
	
	system("pause");
	return 0;
}
