#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	char nomeArquivo[10];
	float temp, mediaTemp=0, somaTemp=0, maiorTemp=0;
	int contTemp;
	FILE *arq;
		
	printf("Digite o nome do arquivo: ");
	gets(nomeArquivo);
	
	arq = fopen(nomeArquivo, "r");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else {
	
		while( (temp = fgetc(arq))!= ' '){
			contTemp ++;
			printf("Contagem de temp: %i\n", contTemp);
			somaTemp = temp + somaTemp;
			if (temp>maiorTemp)
				maiorTemp = temp;	
		}
	}
		
	mediaTemp = somaTemp/contTemp;
	
	printf("A temperatura media e de: %.2f\n", mediaTemp);
	printf("A maior temperatura e de: %.2f\n", maiorTemp);	
	
	fclose(arq);
	
	system("pause");
	return 0;
}

