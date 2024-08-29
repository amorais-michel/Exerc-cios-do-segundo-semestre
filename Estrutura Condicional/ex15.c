#include <stdio.h>

int main(){
	int n1, n2, n3, n4, n5;
	
	printf("Digite dois numeros:");
	scanf("%d%d", &n1, &n2);
	
	
	if (n1 == n2){
		printf("São iguais");
	}
	else if (n1 != n2 && n1 % 2 == 0){
		printf("Digite um terceiro numero:");
		scanf("%d", &n3);
		
		if(n1 > n2 && n1 > n3){
			printf("O primeiro e maior");
			
		}
		else if (n2 > n1 && n2 > n3){
			printf("O segundo e maior");
		}
		
		else if(n3 > n2 && n3 > n1){
			printf("O terceiro e maior");
		}

		
	}
	else if (n1 % 2 > 0){
		
		printf("Digite mais dois numeros:");
		scanf("%d%d", &n4, &n5);
		
		if (n1 > n2){
			printf("\nO primeiro numero entre os dois numeros digitados no inicio, e maior");
			
		}
		else{
			printf("\nO segundo numero entre os dois numeros digitados no inicio,  e maior");
		}
		
		if (n4 > n5){
			printf("\nO primeiro numero entre os dois numeros digitados no fim, e maior");
		}
		else{
			printf("\nO segundo numero entre os dois numeros digitados no fim,  e maior");
		}
		
	
	}
}
