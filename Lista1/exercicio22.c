#include <stdio.h>

int main(){
	
	float lados;
	
	printf("Digite o numero de lados do poligono convexo:\n");
	scanf("%f",&lados);
	
	printf("Numero de diagonais dessse poligono:%.2f\n",(lados*(lados-3))/2);
	
	
	return 0;
	
	
}
