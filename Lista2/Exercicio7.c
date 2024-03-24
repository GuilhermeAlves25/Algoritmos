#include <stdio.h>

int main (){
	
	float salario,salariocomD, salariocomR;
	
	printf("Digite o valor do salario:\n");
	scanf("%f", &salario);
	
	salariocomD = salario*0.3;
	salariocomR = salario + salariocomD;
	
	if (salario < 500){
	printf("Salario reajustado: %.2f\n", salariocomR);}
	
	else if (salario > 500.00){
		printf("Este salario nao tem direito a reajuste!\n");
	}
	
	return 0;
	
	
	
	
}
