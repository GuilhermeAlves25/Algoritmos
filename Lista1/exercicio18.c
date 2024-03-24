#include <stdio.h>

int main(){
	
	float temperatura;
	
	
	printf("Digite a temperatura em Celsius:\n");
	scanf("%f",&temperatura);
	
	
	printf("Temperatura convertida para Fahrenheit:%.2f\n", (180*(temperatura+32))/100);
	
	return 0;

}
