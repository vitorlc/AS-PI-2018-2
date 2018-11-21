/*
1. Escreva um programa em C que receba do usuário um arquivo texto e mostre na tela quantas linhas esse
arquivo possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char nomeArquivo[10];
	int num=1, caractere=0;
	FILE *arq;
	
	printf("Digite o nome do arquivo: ");
	gets(nomeArquivo);
	
	arq = fopen(nomeArquivo, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		while( (caractere = fgetc(arq))!= EOF )
			if (caractere == '\n')
				num++;
	
	printf("Existem %d linhas no arquivo\n", num);
	fclose(arq);
	
	return 0;
}

