#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuestao 09.\n");
    
    int n, c;
    
    printf("\nValor do N�mero: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
    	if(n%i == 0){
    		c += 1;
		}
	}
    
    if(c == 2){
    	printf("\nO n�mero %d � primo!\n", n);
	} else {
		printf("\nO n�mero %d n�o � primo!\n", n);
	}
    
    system("Pause");
    return 0;
}
