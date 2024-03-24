#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main(){
	
	int idade;
	
	printf("Digite a idade:\n");
	scanf("%d", &idade);
	
	if (idade<18){
		printf("Voce e menor de idade!\n");
	}
	else if (idade>18){
		printf("Voce e maior de idade!\n");
	}
	
	printf("O programa vai fechar em 5 segundos...\n");
    sleep(5);
    return 0;	
	
}
