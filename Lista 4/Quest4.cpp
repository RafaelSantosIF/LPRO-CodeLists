#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("\tQuestao 04.\n");
	
	int n, f=1;
	
	printf("\nNumero: ");
	scanf("%d", &n);
	
	while(n < 0){
		printf("\nO Numero nao pode ser negativo!");
		printf("\nNumero: ");
		scanf("%d", &n);
	}
	
	if (n != 0){
		for(int i=n; i>0; i--){
			f = f*i;
		}	
	} else {
		f = 1;
	}
	
	
	printf("A fatorial de %d equivale a: %d.\n", n, f);
	
	system("Pause");
	return 0;
}
