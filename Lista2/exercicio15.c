#include <stdio.h>

int main(){
	
	float investimento , porcentagem, investimentoR;
	int tipo;
	

	printf("Digite o valor do investimento:\n");
	scanf("%f", &investimento);
	
	printf("Escolha o tipo de investimento:\n 1-poupanca\n 2-Fundos de renda fixa \n:");
	scanf("%d", &tipo);
	

	if (tipo==1){
		porcentagem = (investimento*0.03);
		investimentoR = porcentagem+investimento;
		printf("Valor do investimento reajustado de acordo com a opcao selecionada:%.2f\n",investimentoR);
	}
		if (tipo==2){
		porcentagem = (investimento*0.04);
		investimentoR = porcentagem+investimento;
		printf("Valor do investimento reajustado de acordo com a opcao selecionada:%.2f\n",investimentoR);
	}
	
return 0;	
	
}
