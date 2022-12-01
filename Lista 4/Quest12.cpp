#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuestao 12.\n");
    
    int n, s, a=0, b=1;
    
    printf("\nNúmero de Casas de Fibonacci: ");
    scanf("%d", &n);
    
    for (int i=1; i <= n; i++){
    	printf(" %d ", b);
    	s = a + b; a = b; b = s;
	}
    
    
    system("Pause");
    return 0;
}
