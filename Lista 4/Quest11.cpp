#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuestao 11.\n");
    
    int a, b, c;
    
    printf("\nPrimeiro Número: ");
    scanf("%d", &a);
    printf("\nSegundo Número: ");
    scanf("%d", &b);
    printf("\nTerceiro Número: ");
    scanf("%d", &c);
    
    if ((a >= b) && (a >= c)) {
        if (b >= c){
            printf("%d + %d = %d\n", a, b, a+b);
        } else if (c < b){
            printf("%d + %d = %d\n", a, c, a+c);
        }
    } else if ((b > a) && (b >= c)) {
        if (a >= c){
            printf("%d + %d = %d\n", b, a, b+a);
        } else if (c > a){
            printf("%d + %d = %d\n", b, c, b+c);
        } 
    } else if ((c > a) && (c > b)) {
        if (a >= b){
            printf("%d + %d = %d\n", c, a, c+a);
        } else if (b > a){
            printf("%d + %d = %d\n", c, b, c+b);
        } 
    }
    
    system("Pause");
    return 0;
}
