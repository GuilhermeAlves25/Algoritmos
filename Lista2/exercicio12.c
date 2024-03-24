#include <stdio.h>

int main (){
	
	float salario, gratificacao, imposto, salarioR;
	
	printf("Digite o salario:\n");
	scanf ("%f", &salario);
	
	
     if (salario <= 300){
		gratificacao = salario + 100;
		imposto = (salario*0.07);
		salarioR = gratificacao+imposto+salarioR;
		printf("Valor do salario com gratificacao e imposto:%.2f \n", salarioR);
	}
	else if (salario >= 350 && salario <=600){
		gratificacao = salario + 75;
		imposto = (salario*0.07);
		salarioR = gratificacao+imposto+salarioR;
		printf("Valor do salario com gratificacao e imposto:%.2f \n", salarioR);
	}
	else if (salario >= 600 && salario <=900){
		gratificacao = salario + 50;
		imposto = (salario*0.07);
		salarioR = gratificacao+imposto+salarioR;
		printf("Valor do salario com gratificacao e imposto:%.2f \n", salarioR);
    }
	else if (salario >900){
		gratificacao = salario + 35;
		imposto = (salario*0.07);
		salarioR = gratificacao+imposto+salarioR;
		printf("Valor do salario com gratificacao e imposto:%.2f \n", salarioR);  
    }
    
    return 0;
}
