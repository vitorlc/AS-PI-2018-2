/* 4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula
do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.*/

#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[30], numero_Mat[20];
	float nota1, nota2, nota3, mediaNotas;
} Alunos;

int main (void){
	
	Alunos a[1];
	int i, posicao_maior_N1=0, posicao_menor_Media=0, posicao_maior_Media=0;
	float maior_Media = 0.0, menor_Media = 10, sum_Media = 0.0, media_Geral_Final = 0.0, maior_N1 = 0.0;
	
	for(i=0; i<3; i++) {
	    strcpy(a[i].nome, "NULL");
		strcpy(a[i].numero_Mat, "NULL");
		a[i].nota1 = 0.0;
		a[i].nota2 = 0.0;
		a[i].nota3 = 0.0;
		a[i].mediaNotas = 0.0;
	}
	
	for(i=0; i<3; i++){
		printf("Entre com o Nome: ");
		scanf("%s%*c", &a[i].nome);
		printf("Entre com a Matricula: ");
		scanf("%s%*c", &a[i].numero_Mat);
		printf("Entre com a Nota 1:  ");
		scanf("%f%*c", &a[i].nota1);
		printf("Entre com a Nota 2:  ");
		scanf("%f%*c", &a[i].nota2);
		printf("Entre com a Nota 3:  ");
		scanf("%f%*c", &a[i].nota3);	
		a[i].mediaNotas = (a[i].nota1 + a[i].nota2 + a[i].nota3)/3;
		sum_Media = sum_Media + a[i].mediaNotas;
		
		printf("\n");
	}
	
		media_Geral_Final = sum_Media/3;
		
	for(i=0; i<3; i++){
		
		if (a[i].nota1 > maior_N1){
			maior_N1=a[i].nota1;
			posicao_maior_N1 = i;
		}
		
		if (a[i].mediaNotas > maior_Media){
			maior_Media=a[i].mediaNotas;
			posicao_maior_Media = i;
		}
		
		if (a[i].mediaNotas < menor_Media){
			menor_Media=a[i].mediaNotas;
			posicao_menor_Media = i;
		}
		
		printf("\n");
	}
	
	
	
	printf("\nDados dos Alunos:\n");	
	
	for(i=0; i<3; i++){
		printf("\nNome: %s ", a[i].nome);
		printf("\nNumero de Matricula: %s", a[i].numero_Mat);
		printf("\n---Notas---\nN1: %.2f\nN2: %.2f\nN3: %.2f", a[i].nota1, a[i].nota2, a[i].nota3);
		printf("\n--------\n");
		printf("Media: %.2f", a[i].mediaNotas);
		if (a[i].mediaNotas>=6){
			printf("\n--------\n");
			printf("ALUNO APROVADO");
		}else{
			printf("\n--------\n");
			printf("ALUNO REPROVADO");
		}
		printf("\n--------\n");
	}
	
	printf("\n-----------MEDIAS DA TURMA-----------\n");
	printf("Media Geral da Turma: %.2f", media_Geral_Final);
	printf("\nMaior N1: %.2f do aluno: %s", maior_N1, a[posicao_maior_N1].nome);
	printf("\nMaior Media Geral: %.2f do aluno: %s", maior_Media, a[posicao_maior_Media].nome);
	printf("\nMenor Media Geral: %.2f do aluno: %s", menor_Media, a[posicao_menor_Media].nome);
	printf("\n--------\n");
		
	system("pause");
	return 0;
}

