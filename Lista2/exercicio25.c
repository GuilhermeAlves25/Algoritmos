#include <stdio.h>
#include <math.h>

int main(){
	
	float horas, horasfaltadas,horastotais,minutos;
	
	printf("Digite o numero de horas extras:\n");
	scanf("%f", &horas);
	
	printf("Digite o numero de horas faltadas:\n");
	scanf("%f", &horasfaltadas);
	
	minutos = horas*60;
    horastotais = minutos - (horasfaltadas*2/3);
    
    if (horastotais<600){
    	printf("Valor da gratificacao: 100\n");
	}
	else if (horastotais >= 600 && horastotais <= 1200){
		printf("Valor da gratificacao: 200\n");
	}
	else if (horastotais > 1200 && horastotais <= 1800){
		printf("Valor da gratificacao:300\n");
	}
	else if (horastotais > 1800 && horastotais <2400){
		printf("Valor da gratificacao: 400\n");
	}
	else if (horastotais > 2400){
		printf("Valor da gratificacao: 500\n");
	}
	
return 0;	
	
}
