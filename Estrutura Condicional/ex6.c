#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float n, n2;
	
	printf("Digite dois numeros:");
	scanf ("%f%f", &n,&n2);
	
	if (n > n2){
		printf("O primeiro numero: %f eh maior", n);
		
	}
	
	else if (n2 > n){
		printf("O segundo numero: %f eh maior", n2);
		
	}
	else if (n == n2 ){
		printf("Sao iguais");
	}
}
