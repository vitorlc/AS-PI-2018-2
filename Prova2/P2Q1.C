/*
1. (6 pontos) (Tema: Struct). Escreva um programa em que:
a) Seja definida, globalmente, uma estrutura (struct) para representar as coordenadas de um ponto no
plano (campos X e Y). Use typedef e atribua à estrutura o sinônimo t_Ponto.
b) Seja implementada uma função que receba dois valores do tipo t_Ponto e calcule e retorne a distância
euclidiana entre eles.
c) Na função main:
c.1) Deve-se declarar duas variáveis (A e B) do tipo t_Ponto.
c.2) Passar, como parâmetros as variáveis A e B para a função especificada anteriormente na alínea “b” e
imprimir o resultado retornado por essa função.
*/

#include <stdio.h>
#include <math.h>

typedef struct {
	float x;
	float y;
}t_Ponto;

float distancia(t_Ponto A, t_Ponto B){
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));	
}

int main (void){
	t_Ponto A, B;
	A.x= 10; 
	A.y= 9;
	B.x=5;
	B.y=2;
	
	printf("%f", distancia(A, B));
	
	return 0;
}

