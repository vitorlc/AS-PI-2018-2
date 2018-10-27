/*
3. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5
alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[30], numero_Mat[20], curso[50];
} Alunos;

int main (void){
	
	Alunos a[5];
	int i;
	
	for(i=0; i<5; i++) {
	    strcpy(a[i].nome, "NULL");
		strcpy(a[i].numero_Mat, "NULL");
		strcpy(a[i].curso, "NULL");
	}
	
	for(i=0; i<5; i++){
		printf("Entre com o nome: ");
		scanf("%s%*c", &a[i].nome);
		printf("Entre com a matricula: ");
		scanf("%s%*c", &a[i].numero_Mat);
		printf("Entre com o curso: ");
		scanf("%s%*c", &a[i].curso);
		printf("\n");
	}
	
	printf("\nDados dos Alunos Gravados:\n");	
	
	for(i=0; i<5; i++){
		printf("\nNome: %s ", a[i].nome);
		printf("\nNumero de Matricula: %s", a[i].numero_Mat);
		printf("\nCurso: %s", a[i].curso);
		printf("\n");
	}
	
	system("pause");
	return 0;
}

