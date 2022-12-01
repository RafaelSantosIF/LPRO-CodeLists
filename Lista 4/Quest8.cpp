#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    printf("\tQuesto 08.\n");
    
    int I, II, III, IV, V;
    
    printf("\nNota I: ");
    scanf("%d", &I);
    printf("\nNota II: ");
    scanf("%d", &II);
    printf("\nNota III: ");
    scanf("%d", &III);
    printf("\nNota IV: ");
    scanf("%d", &IV);
    printf("\nNota V: ");
    scanf("%d", &V);
   	
	if((I>=70) && (II>=70) && (III>=70) && (IV>=70) && (V>=70)){
		printf("\nClassificação: A.\n");
	} else if ((I>=70) && (II>=70) && (III<70) && (IV>=70) && (V<70)){
		printf("\nClassificação: B.\n");
	} else if (((I>=70) && (II>=70)) || ((III>=70) && (IV>=70)) && (V<70)){
		printf("\nClassificação: C.\n");
	} else {
		printf("\nClassificação: Reprovado.\n");
	}
    
    system("Pause");
    return 0;
}
