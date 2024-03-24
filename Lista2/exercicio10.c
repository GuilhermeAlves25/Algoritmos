#include <stdio.h>

int main(){
	
float custodefabrica, porcD, inpostos, precodocarro;

  printf ("Digite o custo de fabrica:\n");
  scanf ("%f", &custodefabrica);
  
  if (custodefabrica<=12000 ){
     porcD = (custodefabrica*0.05);
     precodocarro= porcD+custodefabrica;
     printf("Valor do carro com o custo de fabrica:%2.f \n ",precodocarro);
  }
  else if (custodefabrica>12000 && custodefabrica <=25000){
  	porcD = (custodefabrica*0.10);
  	inpostos = (custodefabrica*0.15);
  	precodocarro= custodefabrica+inpostos+porcD;
  	printf("Valor do carro com o custo de fabrica e impostos:%2.f\n", precodocarro);
  }	
  else if (custodefabrica>25000){
  	porcD= (custodefabrica*0.15);
  	inpostos=(custodefabrica*0.20);
  	precodocarro= porcD+inpostos+custodefabrica;
  	printf("Valor do carro com custo de fabrica e impostos:%2.f\n",precodocarro);
  }
  return 0;
}

