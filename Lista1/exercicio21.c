#include <stdio.h>
#include <math.h>

int main(){
	
	float salarioM,salarioB,salarioF,horas,horasE,qtdextra;
	
	printf("Digite o salario minimo:\n");
	scanf("%f",&salarioM);
	
	printf("Digite as horas trabalhadas:\n");
	scanf("%f",&horas);
	
	printf("Digite as horas extras:\n");
	scanf("%f", &horasE);
	
	
	printf("Salario a receber:%.2f\n", salarioF = (horas*(salarioM/8))+(horasE*(salarioM/4)));
	
	return 0;
	
	
	
	
	
	
	
	
}
