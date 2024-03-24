#include <stdio.h>

int main(){
	
	int x,y,z;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &x);
	
	printf("Digite o segundo valor:\n");
	scanf("%d", &y);
	
	printf("Digite o terceiro valor:\n");
	scanf("%d",&z);
	
	if ( x>y && x>z){
		printf("%d e o maior dos tres valores!\n",x);}
		
		else if (y>x && y>z){
			printf("%d e o maior dos tres valores!\n",y);}
			
			else if (z>x && z>y){
				printf("%d e o maior dos tres valores\n");}
		
	return 0;
}
