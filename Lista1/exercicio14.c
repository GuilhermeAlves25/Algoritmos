#include <stdio.h>

int main(){
	
	int idade,nascimento;
	
	printf("Digite o ano de nascimento:\n");
	scanf("%d",&nascimento);
	
	printf("Digite o ano atual:\n");
	scanf("%d",&idade);
	
	
	printf("Idade em anos: %d \n",idade-nascimento);
	printf("Idade em meses:%d \n", (idade-nascimento)*12);
	printf("Idade em dias:%d \n", (idade-nascimento)*365);
	printf("Idade em semanas:%d \n", (idade-nascimento)*48);
	
	return 0;
	
}
