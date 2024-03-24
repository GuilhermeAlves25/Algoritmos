#include <stdio.h>5

int main (){
	
	float salario,porcentagem, salarioreajust;
	
	printf("Diagite o salario:\n");
	scanf("%f", &salario);
	
	if (salario<=300){
		porcentagem = (salario*0.15);
		salarioreajust = salario + porcentagem;
		printf("Valor do salario reajustado:%.2f\n",salarioreajust);
}
		else if (salario > 300 && salario<=600){
			porcentagem = (salario*0.10);
			salarioreajust = salario+porcentagem;
			printf("Valor o salario reajustado:%.2f\n",salarioreajust);
			
		}
		else if (salario > 600 && salario <=900){
			porcentagem = (salario*0.05);
			salarioreajust = salario+porcentagem;
			printf("Valor do salario com reajuste:%.2f\n",salarioreajust);
			}
	    else if (salario>900){
	    	printf("Este salario nao possui reajuste!\n");
		}
		
	return 0;	
}
