#include <stdio.h>

void main() {
  
  float notasAlunos[7];
  float notaEscolhida;
  int notaEscolhidaExiste = 0, i;

  for(i=1; i<=7; i++) {
    printf("informa a nota do aluno %d: ", i);
    scanf("%f", &notasAlunos[i]);
  }

  printf("informe a nota a ser procurada: ");
  scanf("%f", &notaEscolhida);

  for( i=1; i<=7; i++) {
    if(notaEscolhida == notasAlunos[i]) {
      notaEscolhidaExiste = 1;
    };
  };

  if(notaEscolhidaExiste) {
    printf("A nota escolhida existe");
  } else {
    printf("A nota escolhida não existe");
  }
}
