#include <stdio.h>

int main(){
	
	float largura, comprimento;
	
	printf("Digite a largura do comodo:\n");
	scanf("%f",&largura);
	
	printf("Digite o comprimento do comodo:\n");
	scanf("%f",&comprimento);
	
	printf("A area em m2 do comodo:%.2f \n", largura*comprimento);
	printf("A potencia da iluminacao em Watts para iluminar %.2f metros e: %.2fWatts\n", largura*comprimento,18*(largura*comprimento));
		
	return 0;
}
