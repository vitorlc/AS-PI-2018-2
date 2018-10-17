/*2. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada
posição desse array.*/

#include <stdio.h>
#include <stdlib.h>

void main() {
	float arrayFloat[]={2.3, 4.5, 6.1, 1.9, 6.3, 0.7, 8.1, 8.9, 10.2, 34.6};
	float *ptr=NULL;
  	int i;
	
	ptr = arrayFloat;
	
	for (i=0;i<=10;i++){	
		printf("Endereco do ponteiro: %d  - Valor do ponteiro: %f\n", &ptr[i], ptr[i] );
		ptr[i] = i*i;
	}
	
	system("pause");
}


 
