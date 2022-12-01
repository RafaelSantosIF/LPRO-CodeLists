#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\tQuestao 07.\n");
    
    int b, h, a, p;
    
    printf("\nValor de BASE: ");
    scanf("%d", &b);
    printf("\nValor de ALTURA: ");
    scanf("%d", &h);
   	
	a = (b*h);
	p = (b*2) + (h*2);
	
	printf("\nUm retangulo de base %d e altura %d possui: \n", b, h);
	printf("AREA: %d \nPERIMETRO: %d \n", a, p);
    
    system("Pause");
    return 0;
}
