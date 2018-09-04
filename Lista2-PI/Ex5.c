/*
5. Escreva um programa em C que receba a temperatura média de cada mês do ano, em centígrados, 
e armazene essas temperaturas em um vetor; imprimir as temperaturas de todos os meses, 
a maior e a menor temperatura do ano e em que mês acontecem.
*/

#include <stdio.h>

void main() {
  
  int i;
  float tempMediaMes[12], media=0, maiorTemp=0, menorTemp=0;
  
  for(i=1; i<=12; i++) {
    printf("Informa a temperatura media do mes %d (em Centigrados):  ", i);
    scanf("%f", &tempMediaMes[i]);
    media=media+tempMediaMes[i];
  }
  
  for(i=1; i<=12; i++) {
	    printf("\nTemperatura media do mes %d (em Centigrados): %f ",i , tempMediaMes[i]);
	    if(tempMediaMes[i] > maiorTemp) {
	      maiorTemp==tempMediaMes[i];
	    } else if(tempMediaMes[i] < menorTemp) {
	      menorTemp==tempMediaMes[i];
	    }
    }
  
  media=media/12;	
  printf("\nMaior Temperatura Registrada: %f\n", maiorTemp);
  printf("Menor Temperatura Registrada: %f\n", menorTemp);
  printf("Temperatura media: %f", media);	
}

