#include <stdio.h>
#include <stdlib.h>

int main(){
	int anonascimento, anoatual = 2024;
	
	printf("Ano de nascimento:");
	scanf("%d",&anonascimento);
	
	
	
	
	if (anoatual - anonascimento >= 18 ){
		printf("Voce pode votar em 2024");
		

	}
	
	else{
		printf("Voce nao pode votar em 2024");
	}
}
