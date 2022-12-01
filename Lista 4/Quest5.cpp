#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	printf("\tQuestao 05.\n");
	
	int a, b, r, mdc;
	
	printf("\nValor A: ");
	scanf("%d", &a);
	printf("\nValor B: ");
	scanf("%d", &b);
	
	if(b > a){
		int ax;
		ax = a; a = b; b = ax;
	}
	
	do {
		r = a%b;
		a = b;
		b = r;
	} while(r != 0);
	mdc = a;
	
	printf("O Maximo Divisor Comum equivale a: %d.\n", mdc);
	
	system("Pause");
	return 0;
}
