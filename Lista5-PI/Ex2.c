/*2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em
uma estrutura.*/

#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[30];
	int idade;
	char endereco[100];
} Dados;

int main (void){
	Dados pessoa;
	
	printf("Entre com o nome: ");
	scanf("%s", pessoa.nome);
	printf("Entre com a idade: ");
	scanf("%d", &pessoa.idade);
	printf("Entre com o endereco: ");
	scanf(" %s", pessoa.endereco);
	
	printf("\nDados gravados:\n");
	printf("Nome: %s\nIdade: %d\nEndereco:%s \n", pessoa.nome, pessoa.idade, pessoa.endereco);
	
	system("pause");
	return 0;
}

