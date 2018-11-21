/*
2. Escreva um programa em C que receba do usuário um arquivo texto e mostre na tela quantas letras são
vogais.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char nomeArquivo[10], caractere;
	//char vogais[6] = { 'a', 'e', 'i', 'o', 'u', '\0' };
	int qtd_vogais=0;
	FILE *arq;
	
	printf("Digite o nome do arquivo: ");
	gets(nomeArquivo);
	
	arq = fopen(nomeArquivo, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		while( (caractere = fgetc(arq))!= EOF )
			if((caractere=='a')||(caractere=='i')||(caractere=='e')||(caractere=='o')||(caractere=='u'))
				qtd_vogais++;
	
	printf("Existem %d vogais no arquivo\n", qtd_vogais);
	fclose(arq);
	
	return 0;
}

