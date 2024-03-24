#include <stdio.h>

int main(){
	
	float x,y;
	
	printf("Digite o primeiro valor:\n");
	scanf("%f", &x);
	
	printf("Digite o segundo valor:\n");
	scanf("%f", &y);
	
	if (x < y){
		printf("%.2f e maior que %.2f\n", y,x);
	} else if (x>y){
		printf("%.2f e maior que %.2f\n", x,y);
	}
	return 0;
}
