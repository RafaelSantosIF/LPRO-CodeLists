#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Multiplicator: the 4 \n");
	
	int v1, v2, v3, v4, pdt;
	
	printf("Primeira Número: ");
	scanf("%d", &v1);
	
	printf("Multiplicado por: ");
	scanf("%d", &v2);
	
	printf("Multiplicado por: ");
	scanf("%d", &v3);
	
	printf("Multiplicado por: ");
	scanf("%d", &v4);
	
	pdt = v1 * v2 * v3 * v4;
	
	printf("\n O Valor do produto entre estes quatro números equivale a: ");
	printf("%.d \n", pdt);
	
	system("pause");
	
	return 0;
}
