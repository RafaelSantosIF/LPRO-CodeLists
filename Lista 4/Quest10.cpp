#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuestao 10.\n");
    
    int n;
    
    printf("\nValor do N�mero: ");
    scanf("%d", &n);
    
    if(n < 0){
    	printf("\nO n�mero %d � Negativo!\n", n);
	} else {
		printf("\nO n�mero %d � Positivo!\n", n);
	}
    
    system("Pause");
    return 0;
}
