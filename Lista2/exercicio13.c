#include <stdio.h>

int main(){
	
	float produto, porcentagem, produtoR;
	
	printf("Digite o valor do produto:\n");
	scanf ("%f", &produto);
	
	
	porcentagem = (produto*0.05);
	produtoR = produto+porcentagem;
	
	printf("Valor reajustado do produto:%.2f\n",produtoR);	
	
		if (produtoR<=80){
			printf("Este produto e barato!");
		}
	
        if (produtoR >=80 && produtoR <= 120){
			printf("Este produto e normal!");
		}

		if (produtoR >=120 && produtoR <= 200){
			printf("Este produto e caro !");
		}
	
	    if (produtoR >200){
		    printf("Este produto e muito caro!");
     	}
	
	
	return 0;
	
	
}
