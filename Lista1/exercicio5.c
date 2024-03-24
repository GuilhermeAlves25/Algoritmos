#include <stdio.h>

int main(){
	
	float produto;
	
	printf("Digite o valor do produto:\n");
	scanf("%f",&produto);
	
	
	printf("Valor do produto com dez por cento de desconto: %.2f \n",produto-(produto*0.10));
	
	return 0;
	
}
