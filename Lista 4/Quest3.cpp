#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("\tQuestao 03.\n");
	
	int x, n, p;
	
	printf("\nNumero e Expoente: ");
	scanf("%d %d", &x, &n);
	
	while(n < 0){
		printf("\nO Expoente nao pode ser negativo!");
		printf("\nExpoente: ");
		scanf("%d", &n);
	}
	p = pow(x, n);
	printf("O numero %d elevado a potencia %d equivale a: %d\n", x, n, p);
	
	system("Pause");
	return 0;
}
