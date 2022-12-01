#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuestao 13.\n");
    
    int n;
    
    printf("\nNúmero: ");
    scanf("%d", &n);
    
    for (int i=1; i <= n; i++){
		if (i * (i+1) * (i+2) == n){
			printf("Número Triângular!\n");
			return 0;
		} else {
			printf("Número não Triâmgular!\n");
			return 0;
		}
	}
	
    system("Pause");
    return 0;
}
