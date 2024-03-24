#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main(){
	
	float altura, pesoideal;
	char sexo;
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	printf("Digite o sexo:\n M-Masculino\n F-Feminino");
	fflush(stdin);
	scanf("%c", &sexo);
	
	
	if (sexo = 'M'){
		pesoideal = (72.7*altura)-58;
		printf("Seu peso ideal e %.2f \n", pesoideal);
	}
	else if (sexo = 'F'){
		pesoideal = (62.1*altura)-44.7;
		printf("Seu peso ideal e %.2f \n", pesoideal);
	}
	
	
	
	
	
	
	


return 0;







	
	printf("O programa vai fechar em 5 segundos...\n");
    sleep(5);
    
    
	}
