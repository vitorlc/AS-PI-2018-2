/*
3. (6 pontos) (Tema: Alocação Dinâmica e Struct) Considere os atributos de um registro (struct) de produto:
Codigo, Valor_Unitario e Quantidade. Escreva um programa em C que leia dados dessa estrutura enquanto
Codigo > 0 em um vetor alocado dinamicamente. Ao final, imprimir: a) Lista de produtos com todos os
dados; b) Dados do produto com maior valor unitário; c) Dados do produto com menor valor unitário; d)
Valor total de produtos em estoque.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int codigo;
	float valor_unit;
	int qtd;
}produto;


void le_produto(produto *prod){
	printf("Digite o codigo ");
   scanf("%d",&(*prod).codigo); 
   printf("Digite o valor unitario ");
   scanf("%f",&(*prod).valor_unit);
   printf("Digite a qtd ");
   scanf("%d",&(*prod).qtd);
}

void imprime_produto(produto produ)
{
	printf("\nCodigo: %d",produ.codigo);
    printf("\nValor unitario: %f",produ.valor_unit);
    printf("\nQtd:: %d",produ.qtd); 
} 

int main(){
    
    produto prod[100];
	le_produto(&prod[100]);
    imprime_produto(prod[100]);
}


