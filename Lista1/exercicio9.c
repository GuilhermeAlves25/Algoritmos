#include <stdio.h>

int main(){
	
	float base1,base2,altura;
	
	printf("Digite o valor da base menor:\n");
	scanf("%f",&base1);
	
	printf("Digite o valor da base maior:\n");
	scanf("%f",&base2);
	
	printf("Digite a altura:\n");
	scanf("%f",&altura);
	
	printf ("Area do trapezio: %.2f\n",(base1+base2)* altura/2);
	
	return 0;
}
