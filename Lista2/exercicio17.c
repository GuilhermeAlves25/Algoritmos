#include <stdio.h>

int main(){
	
	int senha;
	
	printf("Digite a senha de quatro digitos:\n");
	scanf("%d", &senha);
	
	
	if (senha == 4531){
		printf("Acesso concedido!");
	}
	else if(senha != 4531){
		printf("senha incorreta! Acesso negado.\n");
	}
	
return 0;
	
}
