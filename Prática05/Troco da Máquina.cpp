#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Coffee Machine: A Rouba Troco \n");
	int rs, cff, tc;
	
	printf("\nDinheiro Depositado na M�quina: R$");
	scanf("%d", &rs);
	
	cff = rs / 7;
	tc = rs % 7;
	
	printf("\nColocando R$%d,00 na m�quina, voc� recber� %d caf�(s) e perder� R$%d,00 no troco. \n", rs, cff, tc);
	
	system("pause");
	
	return 0;
}
