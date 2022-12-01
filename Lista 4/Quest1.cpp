#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("\tQuestao 01.\n");
	
	int N, P;
	
	do{
		printf("\nNumero: ");
		scanf("%d", &N);
		P = pow(N, 2);
		printf("Quadrado: %d. \n", P);
	} while (N != 0);
	
	system("Pause");
	return 0;
}
