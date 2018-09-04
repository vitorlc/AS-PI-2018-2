void main() {
  
  int num[7], i;

  for(i=1; i<=7; i++) {
    printf("informe 7 numeros : ");
    scanf("%d", &num[i]);
  }
  
  for(i=1; i<=7; i++) {
  	printf("Numero: %d ", num[i]);
    if(num[i]%2 == 0) {
      printf(" - par \n");
    }
    else {
      printf(" - impar \n");
    }
  }
}
  
