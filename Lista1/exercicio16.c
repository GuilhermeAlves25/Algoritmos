#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main(){
	
	float cateto1, cateto2;
	float calculo, calculo2;
	float hipotenusa = 0;
	
	printf("Digite o valor do cateto 1:\n");
	scanf("%f", &cateto1);
	
	printf("Digite o valor do cateto 2:\n");
	scanf("%f", &cateto2);
	
	calculo = (pow(cateto1,2)+pow(cateto2,2));
	calculo2 = sqrt(calculo);
	hipotenusa = calculo2;
	printf("Valor da hipotenusa:%.2f\n", hipotenusa);
	
	return 0;
	
	
	
	
	
	
}
