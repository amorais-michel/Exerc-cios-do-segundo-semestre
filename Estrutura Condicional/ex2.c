#include <stdio.h>
#include <stdlib.h>

int main() {
  float num, numpositivo;

  printf("Digite um numero:");
  scanf("%f", &num);

  

	if (num > 0){
		printf("\n Voce digitou um numero positivo!");
	}
	
	else if (num < 0){
		printf("\n Voce digitou um numero negativo");
		
		numpositivo = num * (-1);
		printf("\n Vou transformar em positivo para voce! Seu numero transformado em positivo eh : %f", numpositivo);
	}

	else if (num == 0 ){
		printf("Voce digitou 0");
	}

}
