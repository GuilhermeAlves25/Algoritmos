#include <stdio.h>
#include <math.h>

int main(){
	
	float angulo, base;
	
	printf("Digite o angulo da escada:\n");
	scanf("%f",&angulo);
	
	printf("Digite a distancia da escada ate a parede:\n");
	scanf("%f",&base);
	
	printf("A medida da escada:%.2f\n", base/(cos(angulo)));
	printf("Cosseno do angulo:%.2f\n",cos(angulo));
   return 0;	
	
}
