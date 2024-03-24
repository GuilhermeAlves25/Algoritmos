#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	float valor;
	int procedencia;
	
	printf("Digite o valor do produto:\n");
	scanf("%f", &valor);
	
	printf("Digite um numero de entre 0 e 31:\n");
	scanf("%d", &procedencia);
	
	if (procedencia == 1){
		printf("Valor do produto:%.2f\n");
		printf("Procedencia do produto: Sul\n");
		
	}
	else if (procedencia == 2){
	    printf("Valor do produto:%.2f\n", valor);
	    printf("Procedencia do produto: Norte\n");
	}
	else if (procedencia == 3){
		printf("Valor do produto:%.2f\n", valor);
		printf("Procedencia do produto: Leste\n");
	}
	else if (procedencia == 4){
		printf("Valor do produto:%.2f\n");
		printf("Procedencia do produto: Oeste\n", valor);
	}
	else if (procedencia == 5 || procedencia == 6){
		printf("Valor do produto:%.2f\n", valor);
		printf("Procedencia do produto: Nordeste\n");
	}
	else if (procedencia == 7 || procedencia == 8 || procedencia == 9){
		printf("Valor do produto:%.2f\n", valor);
		printf("Procedencia do produto: Sudeste\n");
	}
	else if (procedencia >= 10 && procedencia <= 20){
		printf("Valor do produto:%.2f\n",valor);
		printf("Procedencia do produto: Centro-oeste \n");
	}
	else if (procedencia >= 21 && procedencia <=30){
		printf("Valor do produto:%.2f\n", valor);
		printf("Procedencia do produto: Nordeste\n");
	}
	printf("O programa vai fechar em 5 segundos...\n");
    sleep(5);
    
	return 0;
	
	
}
