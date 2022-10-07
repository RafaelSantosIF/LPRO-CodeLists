#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Divisator: one united \n");
	
	int x, y, q, r;
	
	printf("Dividendo: ");
	scanf("%d", &x);
	
	printf("Divisor: ");
	scanf("%d", &y);
	
	q = x/y;
	r = x%y;
	
	printf("\n %d dividido por %d = %d(%d) \n", x, y, q, r);
	
	system("pause");
	
	return 0;
}
