#include <stdio.h>


int main(){
	
	int codigo,quantidade;
	float unitario,total, desconto,precototal, notadepoisD,preco;
	
	printf("Digite o codigo do produto de 1-40:\n");
	scanf("%d", &codigo);
	
	printf("Digite a quantidade do produto:\n");
	scanf("%d",&quantidade);
	

	
	if (codigo >= 1 && codigo<= 10){
		preco = 10.00;
		precototal = preco*quantidade;
		if (precototal<=250){
		desconto = (precototal*0.05);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
		}
		else if (precototal>250 && precototal <=500){
		desconto = (precototal*0.10);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
		}
		else if (precototal>500){
		desconto = (precototal*0.15);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
		}
}
	if (codigo >= 11 && codigo<= 20){
		preco = 15.00;
		precototal = preco*quantidade;
		if (precototal<=250){
		desconto = (precototal*0.05);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
		}
		if (precototal>250 && precototal <=500){
		desconto = (precototal*0.10);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
		}
		else if (precototal>500){
		desconto = (precototal*0.15);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
		}
}
    if (codigo >= 21 && codigo<= 30){
		preco = 20.00;
		precototal = preco*quantidade;
		if (precototal<=250){
		desconto = (precototal*0.05);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
		}
		if (precototal>250 && precototal <=500){
		desconto = (precototal*0.10);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
		}
		if (precototal>500){
		desconto = (precototal*0.15);
		printf("Valor unitario do produto:%.2f\n", preco);
		printf("Valor total da nota:%.2f\n",precototal);
		printf("Valor do desconto:%.2f\n",desconto);
		printf("Valor da nota com desconto:%.2f\n", precototal-desconto);
			}
		
		return 0;
}
}
