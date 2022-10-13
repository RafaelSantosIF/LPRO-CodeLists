#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Coffee Machine: A Rouba Troco \n");
	int rs, cff, tc;
	
	printf("\nDinheiro Depositado na Máquina: R$");
	scanf("%d", &rs);
	
	cff = rs / 7;
	tc = rs % 7;
	
	printf("\nColocando R$%d,00 na máquina, você recberá %d café(s) e perderá R$%d,00 no troco. \n", rs, cff, tc);
	
	system("pause");
	
	return 0;
}
