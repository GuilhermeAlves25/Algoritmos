#include <stdio.h>

int main(){
	
	float salario,vendas;
	
	printf("Digite o valor do salario:\n");
	scanf("%f",&salario);
	
	printf("Digite o valor das vendas:\n");
	scanf("%f",&vendas);
	
	printf("Comissao a receber:%.2f\n",vendas*0.04);
	printf("Salario final com comissao:%.2f\n",salario+(vendas*0.04));
	
	
return 0;
}
