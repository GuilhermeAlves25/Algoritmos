#include <stdio.h>
#include <math.h>

int main(){
	
	float preco, aumento,imposto, valorfinal;
	int categoria, situacao;
	
	
	printf("Digite o valor do produto:\n");
	scanf("%f", &preco);
	
	printf("Digite a categoria do produto: \n Limpeza-1 \n Alimentacao-2 \n Vestuario-3\n");
	scanf("%d", &categoria);
	
	printf("Este produto precisa de refrigeracao?\n Sim-1 \n Nao-2\n");
	scanf("%d", &situacao);
	
	if (preco <= 25 && categoria == 1 && situacao == 2){
		aumento = (preco*0.05)+preco;
		imposto = aumento - (preco*0.08);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);
	}
	else if (preco <= 25 && categoria == 1 && situacao == 1){
		aumento = (preco*0.05)+preco;
		imposto = aumento - (preco*0.05);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);	
		}
	if (preco <= 25 && categoria == 2 && situacao == 2){
		aumento = (preco*0.08)+preco;
		imposto = aumento - (preco*0.05);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);
	}
	else if (preco <= 25 && categoria == 2 && situacao == 1){
		aumento = (preco*0.08)+preco;
		imposto = aumento - (preco*0.05);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);	
		}	
	if (preco <= 25 && categoria == 3 && situacao == 2){
		aumento = (preco*0.10)+preco;
		imposto = aumento - (preco*0.08);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);
	}
	else if (preco <= 25 && categoria == 3 && situacao == 1){
		aumento = (preco*0.10)+preco;
		imposto = aumento - (preco*0.05);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);	
		}
	if (preco > 25 && categoria == 1 && situacao == 2){
		aumento = (preco*0.12)+preco;
		imposto = aumento - (preco*0.08);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);
	}
	else if (preco > 25 && categoria == 1 && situacao == 1){
		aumento = (preco*0.12)+preco;
		imposto = aumento - (preco*0.05);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);	
		}
	if (preco > 25 && categoria == 2 && situacao == 2){
		aumento = (preco*0.15)+preco;
		imposto = aumento - (preco*0.05);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);
	}
	else if (preco > 25 && categoria == 2 && situacao == 1){
		aumento = (preco*0.15)+preco;
		imposto = aumento - (preco*0.05);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);	
		}
	if (preco > 25 && categoria == 3 && situacao == 2){
		aumento = (preco*0.18)+preco;
		imposto = aumento - (preco*0.08);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);
	}
	else if (preco > 25 && categoria == 3 && situacao == 1){
		aumento = (preco*0.18)+preco;
		imposto = aumento - (preco*0.05);
		printf("Valor do produto com aumento e imposto: %.2f \n", imposto);
		}	
		
		if (imposto <= 50){
			printf("Este produto e barato!\n");
		}	
		else if (imposto >50 && imposto <= 120){
			printf("Este produto e normal!\n");
		}
		else if (imposto >= 120){
			printf("Este produto e caro!\n");
		}	
		return 0;	
	}
	
	
	
	
	
	
	
	

