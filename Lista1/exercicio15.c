#include <stdio.h>

int main(){
	
	float c1,c2,salario,salarioF;
	
	printf("digite o valor do salario:\n");
	scanf("%f",&salario);
	
	printf("Digite o valor da primeira conta:\n");
	scanf("%f",&c1);
	
	printf("Digite o valor da segunda conta:\n");
	scanf("%f",&c2);
	
	c1 = c1+(c1*0.02);
	c2 = c2+(c2*0.02);
	salarioF = salario - (c1+c2);
		
	
	
	printf("O salario com os descontos das contas:%.2f\n",salarioF);
	
	return 0;
	
	
	
	
	
	
	
	
}
