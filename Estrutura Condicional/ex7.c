#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor;
	
	printf("Digite um valor:");
	
	scanf("%f", &valor);
	
	if (valor >= 1 && valor <= 9) {
		printf("O valor esta na faixa permitida");
	}
	
	else{
		printf("O valor esta fora da faixa permitida de 1 a 9 ");
	}
}
 
