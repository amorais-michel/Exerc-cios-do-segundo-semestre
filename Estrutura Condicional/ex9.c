#include <stdio.h>
#include <stdlib.h>

int main(){
	float valormaca_minimo = 0.30 , valormaca_maximo = 0.25;
	int quantidade;
	
	printf("Quantas macas vai comprar:");
	scanf("%d",&quantidade);
	
	if (quantidade >= 6){
		printf("Deve pagar: %f", quantidade * 0.25,"reais");
	}
	
	else if(quantidade < 6){
		printf("Deve pagar: %f", quantidade * 0.30);
	}
	
	
}
