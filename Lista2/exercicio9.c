#include <stdio.h>

int main(){
	
	float saldo, porcentagem,credito;
	
	printf ("Digite o saldo:\n");
	scanf ("%f", &saldo);
	
	if (saldo<=200){
		porcentagem = (saldo*0.10);
		printf("Valor do credito especial: %.2f \n", porcentagem);
	}
	else if (saldo>200 && saldo<300){
		porcentagem = (saldo*0.20);
		printf("Valor do credito especial: %.2f \n", porcentagem);
	}
	else if (saldo>300 && saldo<400){
		porcentagem = (saldo*0.25);
		printf("Valor do credito especial: %.2f \n", porcentagem);
	}
	else if (saldo>400){
		porcentagem = (saldo*0.30);
		printf("Valor do credito especial: %.2f \n", porcentagem);
	}
	return 0;
}
