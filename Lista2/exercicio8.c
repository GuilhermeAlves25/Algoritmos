#include <stdio.h>

int main (){
	
	float salario, salarioR,salarioRe,salariomenor,salarioRe2;
	
	printf ("Digite o valor do salario:\n");
	scanf ("%f" , &salario);
	
	salarioR = (salario*0.30);
	salarioRe = salario+salarioR;
	salariomenor = (salario*0.15);
	salarioRe2 = salario+salariomenor;
	
	
	if (salario<=300){
		
		printf("O salario com reajuste e %.2f\n", salarioRe);
	}
	else if (salario>300){
		
		printf("O salario com reajuste e %.2f\n",salarioRe2);
	}
	
	return 0;
	
}
