#include <stdio.h>
#include <math.h>

int main(){
	
	float raio;
	
	printf("Considerando o valor de pi 3.14 digite o raio:\n");
	scanf("%f",&raio);
	
	printf("O comprimento da esfera: %.2f\n", 2*3.14*raio);
	printf("A area da esfera:%.2f\n", 3.14*(pow(raio,2)));
	printf("O volume da esfera:%.2f\n",0.75*3.14*(pow(raio,3)));
	
	return 0;
}
