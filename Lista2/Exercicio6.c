#include <stdio.h>
#include <math.h>

int main (){
	
	float A,B,eleva,Raiz,Raiz2,Raizcub1, Raizcub2;
	int escolha;
	
	printf("digite o primeiro valor:\n");
	scanf("%f", &A);
	
	printf("digite o segundo valor:\n");
	scanf("%f", &B);
	
	printf("Escolha um numero de 1 a 3 correspondente a operacao que deseja realizar:\n");
	scanf("%d", &escolha);
	
	eleva = pow(A,B);
	Raiz = sqrt(A);
	Raiz2 = sqrt(B);
	Raizcub1 = cbrt(A);
	Raizcub2 = cbrt(B);
	
	
	if (escolha == 1){
	printf("%.2f elevado a %.2f e igual a %.2f \n", A, B,eleva);}
	
	else if(escolha == 2){
	printf("A raiz quadrada de %.2f e %.2f\n",A,Raiz);
	printf("A raiz quadrada de %.2f e %.2f\n", B, Raiz2);}
	
	else if (escolha==3){
	printf("A raiz cubica de %.2f e %.2f\n",A,Raizcub1);
	printf("A raiz cubica de %.2f e %.2f\n",B,Raizcub2);}
	
	if (escolha <1 || escolha >3){
		printf("Erro! Opcao invalida. escolha um numero de 1 a 3");}
}
