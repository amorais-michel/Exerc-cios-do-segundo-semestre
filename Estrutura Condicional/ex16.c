#include <stdio.h>

int main(){

	int n1, n2, n3;
	
	printf("Digite tres numeros:");
	scanf("%d%d%d",&n1, &n2,&n3);
	
	if (n1 > n2 || n1 > n3 ){
		printf("O %d e maior",n1);
	}
	
	else if (n2 > n2 || n2 > n3){
		printf("O %d e maior", n2);
	}
	else if(n3 > n1 || n3 > n2){
		printf("O %d e maior",n3);
		
	}
	else{
		printf("Sao iguais");
	}
	
}
