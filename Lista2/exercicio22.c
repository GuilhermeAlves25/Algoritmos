#include <stdio.h>

int main(){
	
	int idade, risco;
	float peso;
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	printf("Digite o peso:\n");
	scanf("%f", &peso);
	
	if (idade < 20 && peso <=60){
		printf("Grupo de risco: 9\n");
	}
	else if (idade < 20 && peso > 60 && peso <=90){
		printf("Grupo de risco: 8\n");	
	}
	else if (idade < 20 && peso >90){
		printf("Grupo de risco: 7\n");
	}
	
	if (idade > 20 && idade <=50 && peso <=60){
		printf("Grupo de risco: 6\n ");
	}
	else if(idade > 20 && idade <=50 && peso >60 && peso <= 90){
		printf("Grupo de risco: 5\n");
	}
	else if (idade >20 && idade <=50 && peso >90){
		printf("Grupo de risco: 4\n");
	}
	
	if (idade > 50 && peso <=60){
		printf("Grupo de risco: 3\n");
	}
	else if (idade > 50 && peso > 60 && peso <=90){
		printf("Grupo de risco: 2\n");
	}
	else if (idade > 50 && peso >90){
		printf("Grupo de risco: 1\n");
	}
	return 0;
}

