#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuestao 09.\n");
    
    int n, c;
    
    printf("\nValor do Número: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
    	if(n%i == 0){
    		c += 1;
		}
	}
    
    if(c == 2){
    	printf("\nO número %d é primo!\n", n);
	} else {
		printf("\nO número %d não é primo!\n", n);
	}
    
    system("Pause");
    return 0;
}
