#include <stdio.h>

int main (){
	
	float salario;
	
	printf("Digite o valor do salario:\n");
	scanf("%f",&salario);
	
	salario = salario/1412;
	
	printf("Esse funcionario ganha %.2f salarios minimos com base no salario atual 1.412.00\n", salario);	
	
	
	return 0;
	
	
}
