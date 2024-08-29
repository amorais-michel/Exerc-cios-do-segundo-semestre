	#include <stdio.h>
	
	int main(){
		
		float altura, peso, pesoideal;
		int opcao;
		
		printf("Qual o seu sexo: \n1) Homem \n2)mulher\n");
		scanf("\n\n%d",&opcao);
		
		switch(opcao) {
			case 1: 
		
				printf("\nAltura e peso:");
				scanf("%f%f", &altura, &peso);
			
				pesoideal = (72.7 * altura) - 58;
			
				printf("Peso ideal:%f", pesoideal);
			break;
			
			case 2:
				printf("\nAltura e peso:");
				scanf("%f%f", &altura, &peso);
			
				pesoideal = (62.1 * altura) - 44.7;
			
				printf("Peso ideal:%f", pesoideal);
				
		}
		
		
	}
