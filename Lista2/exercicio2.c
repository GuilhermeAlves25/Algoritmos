#include <stdio.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	if (media <3){
		printf ("Reprovado");

	} else if (media >=3.0 && media<7.0){
		printf ("Exame");
		
		}else if (media>=7.0){
			printf ("Aprovado!");
		}
	return 0;
}
