#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\tQuestao 02.\n");
	
	int N, S=0;
	
	printf("\nNumero: ");
	scanf("%d", &N);
	for(N; N>0; N--){
		S = S + N;
	}
	printf("Soma Total: %d\n", S);
	system("Pause");
	return 0;
}
