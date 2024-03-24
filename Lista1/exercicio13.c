#include <stdio.h>

int main(){
	
	int numero,zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	zero=numero*0;
	um=numero*1;
	dois=numero*2;
	tres=numero*3;
	quatro=numero*4;
	cinco=numero*5;
	seis=numero*6;
	sete=numero*7;
	oito=numero*8;
	nove=numero*9;
	dez=numero*10;
	
	printf("%dx0=%d\n",numero,zero);
	printf("%dx1=%d\n",numero,um);
	printf("%dx2=%d\n",numero,dois);
	printf("%dx3=%d\n",numero,tres);
	printf("%dx4=%d\n",numero,quatro);
	printf("%dx5=%d\n",numero,cinco);
	printf("%dx6=%d\n",numero,seis);
	printf("%dx7=%d\n",numero,sete);
	printf("%dx8=%d\n",numero,oito);
	printf("%dx9=%d\n",numero,nove);
	printf("%dx10=%d\n",numero,dez);
	
	return 0;	
	
}
