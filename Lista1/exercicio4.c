#include <stdio.h>

int main(){
	
	float nota1,nota2;
	
	printf("Digite a primeira nota:\n");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota:\n");
	scanf("%f",&nota2);
	
	printf("Media ponderada das notas considerando peso 2 para a primeira e peso 2 para a segunda:\n %.2f", ((nota1*2)+(nota2*3))/5);
	
	return 0;
	
	
	
	
}
