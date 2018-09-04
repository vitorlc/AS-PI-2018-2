#include <stdio.h>

void main() {
  float num[10] = { 7, 10, 11, 13, 22, 39, 55, 62, 91, 121};
  float media;
  int maioresMedia = 0, menoresMedia = 0, iguaisMedia = 0, i;

  for(i=0; i<10; i++) {
    media+=num[i];
  };
  media=media/10;
  
  for(i=0; i<10; i++) {
    if(num[i] < media) {
      menoresMedia++;
    } else if(num[i] > media) {
      maioresMedia++;
    } else {
      iguaisMedia++;
    };
  };
  printf("Quantidade de numeros menores que a media: %d\n", menoresMedia);
  printf("Quantidade de numeros maiores que a media: %d\n", maioresMedia);
  printf("Quantidade de numeros iguais a media: %d", iguaisMedia);
};
