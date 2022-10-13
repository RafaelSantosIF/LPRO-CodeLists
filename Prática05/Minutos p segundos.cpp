#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Minutes to Seconds Conversor: Revolution \n");
	
	float min, sec;
	
	printf("Minutos: ");
	scanf("%f", &min);
	
	sec = min * 60;
	
	printf("\n%.2f Minutos equivalem à %2.f Segundos. \n", min, sec);
	
	system("pause");
	
	return 0;
}
