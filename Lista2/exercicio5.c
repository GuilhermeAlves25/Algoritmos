#include <stdio.h>

int main(){
	
	int A, B, media, diferenca, produto, divisao, escolha;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d",&A);
	
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	printf("Escolha um numero de 1 e 4 correspondente a operacao que deseja realizar:");
	scanf("%d", &escolha);
	
	
	if (A>B){
	if (escolha == 1){
	printf ("Media: %d \n", (A+B)/2);}
	else if (escolha == 2){
	printf ("Diferenca: %d \n",A-B);}
	else if (escolha == 3){
	printf ("Produto: %d \n", A*B);}
	else if (escolha == 4 && B != 0){
	printf ("Divisao: %d \n", A/B);
	}else {printf("Impossivel dividir por zero!\n");}
		}


	if (A<B){
	
	if (escolha == 1){
	printf ("Media: %d \n", (A+B)/2);}
	else if (escolha == 2){
	printf ("Diferenca: %d \n",B-A);}
	else if (escolha == 3){
	printf ("Produto: %d \n", A*B);}
	else if (escolha == 4 && B != 0){
	printf ("Divisao: %d \n", A/B);}
	else {printf("Impossivel dividir por zero!\n");
	}
}
	
	if (escolha<1 || escolha > 4){
		printf ("Numero da operacao invalido! *Escolha um numero de 1 e 4.");
	}
	return 0;	
}
