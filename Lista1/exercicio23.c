#include <stdio.h>

int main(){
	
	float a1,a2,soma;
	
	printf("Digite o primeiro angulo:\n");
	scanf("%f",&a1);
	
	printf("Digite o segundo angulo:\n");
	scanf("%f",&a2);
	
	
	soma = 180;
	
	
	printf("Terceiro angulo do triangulo : %.2f\n", 180 - (a1+a2));
	
	return 0;
}
