#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Crazy Addiction \n");
	
	int x, y, z, asw;
	
	printf("N�mero: ");
	scanf("%d", &x);
	
	printf("N�mero: ");
	scanf("%d", &y);
	
	printf("N�mero: ");
	scanf("%d", &z);
	
	asw = (x + y) - z;
	
	printf("\n A Subtra��o da Soma equivale a: %d \n", asw);
	
	system("pause");
	
	return 0;
}
