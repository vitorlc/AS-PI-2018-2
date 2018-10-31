/*
5. Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um
funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do
Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e Salário. Os dados devem ser
digitados pelo usuário, armazenados na estrutura e exibidos na tela.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int Dia;
	int Mes;
	int Ano;
}Data;

typedef struct {
	char Nome[50];
	int Idade;
	char Sexo;
	char CPF[12];
	Data Data_nasc;
	int Cod_setor;
	char Cargo [30];
	float Salario;
}Funcionario;

int main (void){
	Funcionario F1;
	
	printf("Digite o nome do Funcionario: ");
	gets(F1.Nome);
	printf("Digite a idade do Funcionario: ");
	scanf("%i%*c", &F1.Idade);
	printf("Digite o sexo do Funcionario: (M ou F) ");
	scanf("%c%*c", &F1.Sexo);
	printf("Digite o CPF do Funcionario: ");
	gets(F1.CPF);
	printf("Digite a data de nascimento do Funcionario: ");
	scanf("%02i%02i%i", &F1.Data_nasc.Dia, &F1.Data_nasc.Mes, &F1.Data_nasc.Ano);
	printf("Digite o codigo de trabalho do Funcionário: ");
	scanf("%i%*c", &F1.Cod_setor);
	printf("Digite o cargo do Funcionario: ");
	gets(F1.Cargo);
	printf("Digite o salario do Funcionario: ");
	scanf("%f", &F1.Salario);
	
	printf("\n------------FUNCIONARIO CADASTRADO-----------------\n");
	
	printf("NOME: %s", F1.Nome);
	printf("\nIDADE: %d anos", F1.Idade);
	printf("\nSEXO: %c", F1.Sexo);
	printf("\nCPF: %s", F1.CPF);
	printf("\nData Nasc: %i:%i:%i", F1.Data_nasc.Dia, F1.Data_nasc.Mes, F1.Data_nasc.Ano);
	printf("\n%Cod Setor: i", F1.Cod_setor);
	printf("\nCargo: %s", F1.Cargo);
	printf("\nSalario: %.2f", F1.Salario);
}
