#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota1, nota2, media;
	
	printf("Informe as duas notas:");
	scanf("%f%f", &nota1, &nota2);
	
	media = (nota1 + nota2) /2;
	
	if (media >= 6.0){
		printf("PARABENS! Voce foi aprovado!");
	}
	
	
}
