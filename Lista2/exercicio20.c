#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
	
	int idade;
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	
	if (idade >= 5 && idade <= 7){
		printf("Infantil.\n");
	}
	else if (idade >= 8 && idade <= 10){
		printf("Juvenil.\n");
	}
	else if (idade >=11 && idade <= 15){
		printf("Adolescente.\n");
	}
	else if (idade>=16 && idade<=30){
		printf("Adulto.\n");
	}
	else if (idade>30){
		printf("Senior.\n");
	}
	
	printf("O programa vai fechar em 5 segundos...\n");
    sleep(5);
    
	return 0;
}
