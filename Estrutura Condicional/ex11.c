#include <stdio.h>


int main(){
	int senhatentativa;
	
	printf("Digite a senha:");
	scanf("%d",&senhatentativa);
	
	if (senhatentativa == 1234){
		printf("Acesso permitido!");
	}
	else{
		printf("Acesso negado");
	}
}
