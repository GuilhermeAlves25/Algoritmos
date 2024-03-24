#include <stdio.h>

int main(){
	
	float horas, minutos;
	
	printf("Digite a hora:\n");
	scanf("%f",&horas);
	
	printf("Digite os minutos:\n");
	scanf("%f",&minutos);
	
	
	printf("Horas digitadas convertidas em minutos:%.2f \n O total de minutos:%.2f\n O total de minutos convertidos em segundos:%.2f\n"
	, horas*60, minutos+(horas*60), 60*(minutos+(horas*60)));
	
	return 0;
}
