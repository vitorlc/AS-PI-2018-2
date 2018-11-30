#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[]){
	
	FILE *fp;
	float percentLetras = 0.0;
	float ContLetras = 0, NLetras=0, a=0;
	char NomeArq[50], c;
	char Letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Str[2];
	
	printf("Digite o nome do arquivo: ");
	gets(NomeArq);
	
	fp = fopen(NomeArq, "r");
	
	if (fp == NULL) {
		printf("Erro na leitura do arquivo %s.", NomeArq);
	return 1;
	}
	printf("Lendo o arquivo \'%s\'...", NomeArq);
	
	while (fscanf(fp, "%c", &c) != EOF) {
		Str[0] = toupper(c);
		//if (strstr(Vogais, Str))
	
		if (strstr(Letras, Str) != NULL){
			ContLetras++;
		} else{
			NLetras++;
		}
	}
	
	printf("\nO arquivo \'%s\' contem %.2f letras.", NomeArq, ContLetras);
	printf("\nO arquivo \'%s\' contem %.2f nao letras.", NomeArq, NLetras);	
	percentLetras = ContLetras/(ContLetras + NLetras);
	//Fal
	printf("\nO percentual de letras e de: %.2f \n", percentLetras*100);

	system("pause");
	return 0;
}
