#include <stdio.h>

int main(){
	
	int A, B, media, diferenca, produto, divisao, escolha;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d",&A);
	
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	printf("Escolha um numero de 1 e 4 correspondente a operacao que deseja realizar:");
	scanf("%d", &escolha);
	
	media = (A+B)/2;
	diferenca = A-B;
	produto = A*B;
	divisao = A/B;
	
	
	if (escolha == 1){
	printf ("Media: %d \n", media);}
	else if (escolha == 2){
	printf ("Diferenca: %d \n",diferenca);}
	else if (escolha == 3){
	printf ("Produto: %d \n", produto);}
	else if (escolha == 4){
	printf ("Divisao: %d \n", divisao);}
	
	if (escolha<1 || escolha > 4){
		printf ("Numero da operacao invalido! *Escolha um numero de 1 e 4.");
	}
	return 0;	
}
