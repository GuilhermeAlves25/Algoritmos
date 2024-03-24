#include <stdio.h>

int main(){
	
	float peso;
	
	printf("Digite o peso:\n");
	scanf("%f",&peso);
	
	printf("Peso com 15 porcento de aumento:%.2f\n",peso+(peso*0.15));
	printf("Peso com 20 porcento de aumento:%.2f\n",peso+(peso*0.20));
	
	
	
	return 0;
	
}
