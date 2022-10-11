#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Crazy Addiction \n");
	
	int x, y, z, asw;
	
	printf("Número: ");
	scanf("%d", &x);
	
	printf("Número: ");
	scanf("%d", &y);
	
	printf("Número: ");
	scanf("%d", &z);
	
	asw = (x + y) - z;
	
	printf("\n A Subtração da Soma equivale a: %d \n", asw);
	
	system("pause");
	
	return 0;
}
