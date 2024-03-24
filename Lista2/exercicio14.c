#include <stdio.h>

int main(){
	
	float salario, porcentagem, salarioR;
	
	printf("Digite o salario:\n");
	scanf("%f", &salario);
	
	if (salario<=300){
		porcentagem = (salario*0.50);
		salarioR = salario+porcentagem;
		printf("O salario reajustado e:%.2f\n",salarioR);
	}
	else if (salario>=300 && salario <=500){
		porcentagem = (salario*0.40);
		salarioR = salario+porcentagem;
		printf("O salario reajustado e:%.2f\n",salarioR);
	}
	else if (salario >= 500 && salario <= 700){
		porcentagem = (salario*0.30);
		salarioR= salario+porcentagem;
		printf("O salario reajustado e:%.2f\n", salarioR);
	}
	else if (salario >= 700 && salario <= 800){
		porcentagem = (salario*0.20);
		salarioR = salario+porcentagem;
		printf("O salario reajustado e:%.2f\n", salarioR);
	}
	else if (salario >= 800 && salario <= 1000){
		porcentagem = (salario*0.10);
		salarioR = salario+porcentagem;
		printf("O salario reajustado e:%.2f\n", salarioR);
	}
	else if (salario>1000){
		porcentagem = (salario*0.05);
		salarioR = salario+porcentagem;
		printf("O salario reajustado e:%.2f\n", salarioR);
		}
	return 0;
	
}
