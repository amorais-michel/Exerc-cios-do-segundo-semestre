#include <stdio.h>
#include <stdlib.h>

int main(){
	float v1, v2;
	
	printf("Digite dois valores");
	scanf("%f%f",&v1,&v2);
	
	if (v1 < v2){
		printf("Crescente: %f e %f ", v1, v2);
	}
	else if (v2 < v1){
		printf("Crescente: %f e %f ", v2, v1);
	}
}
