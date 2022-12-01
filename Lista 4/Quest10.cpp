#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuestao 10.\n");
    
    int n;
    
    printf("\nValor do Número: ");
    scanf("%d", &n);
    
    if(n < 0){
    	printf("\nO número %d é Negativo!\n", n);
	} else {
		printf("\nO número %d é Positivo!\n", n);
	}
    
    system("Pause");
    return 0;
}
