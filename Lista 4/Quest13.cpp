#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuestao 13.\n");
    
    int n;
    
    printf("\nN�mero: ");
    scanf("%d", &n);
    
    for (int i=1; i <= n; i++){
		if (i * (i+1) * (i+2) == n){
			printf("N�mero Tri�ngular!\n");
			return 0;
		} else {
			printf("N�mero n�o Tri�mgular!\n");
			return 0;
		}
	}
	
    system("Pause");
    return 0;
}
