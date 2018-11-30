/*
3. Escreva um programa em C que receba do usuário um arquivo texto e mostre na tela quantas vezes cada
letra do alfabeto aparece dentro do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char nomeArquivo[10], caractere;
	int num_letras;
	FILE *arq;
	
	printf("Digite o nome do arquivo: ");
	gets(nomeArquivo);
	
	arq = fopen(nomeArquivo, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		while( (caractere = fgetc(arq))!= EOF )
			if ((caractere >= 'a' && caractere >= 'z') || (caractere >= 'A' && caractere >= 'Z')){
				num_letras++;
			}
	printf("Existem %d Letras no arquivo\n", num_letras);
	fclose(arq);
	
	return 0;
}
