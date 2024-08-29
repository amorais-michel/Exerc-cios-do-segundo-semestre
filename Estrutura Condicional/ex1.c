#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;

  printf("Digite um número:");
  scanf("%d", &num);

  int teste = num % 2;

  if (teste == 0){
    printf("\n Par");

  }

  else {
      printf("Impar");
  }





}
