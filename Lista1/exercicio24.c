#include <stdio.h>

int main(){
	
	float real;
	
	
	printf("Digite a quantia de dinheiro em reais:\n");
	scanf("%f",&real);
	
	printf("Valor digitado em dolares:%.2f\n Valor digitado em marco alemao:%.2f\n valor digitado em libra esterlina:%.2f\n", real*1.80,real*2.00,real*3.57);
	
	
	return 0;
	
	
}
