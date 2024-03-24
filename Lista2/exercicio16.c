#include <stdio.h>

int main (){
	
	float produto, porcentagem, desconto, produtoR;
	
	printf("Digite o valor do produto:\n");
	scanf("%f", &produto);
	
	
	if (produto <= 30){
		printf("Este produto nao possui desconto!\n");
	}
	else if (produto > 30 && produto < 100 ){
		porcentagem = (produto * 0.10);
		produtoR = produto - porcentagem;
		printf("Desconto: %.2f \n", porcentagem);
		printf("Valor do produto com desconto: %.2f \n", produtoR);
	}
	else if (produto > 100){
		porcentagem = (produto*0.15);
		produtoR = produto - porcentagem;
		printf("Desconto:%.2f \n",porcentagem);
		printf("Valor do produto com desconto:%.2f \n",produtoR);
	}
	
	
	
	
	
}
