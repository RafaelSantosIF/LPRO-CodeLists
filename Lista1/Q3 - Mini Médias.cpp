#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Médias Ponderadas: The Mini Calculator \n");
	
	float n1, n2, med;
	int p1, p2, sp;
	
	printf("Primeira Nota: ");
	scanf("%f", &n1);
	printf("Peso da Primeira Nota: ");
	scanf("%d", &p1);
	
	printf("Segunda Nota: ");
	scanf("%f", &n2);
	printf("Peso da Segunda Nota: ");
	scanf("%d", &p2);
	
	printf("\n Sua média ponderada entre %.2f, e %.2f - com pesos %d, e %d - é igual a: ", n1, n2, p1, p2);
	
	n1 = n1 * p1;
	n2 = n2 * p2;
	sp = p1 + p2;
	med = (n1 + n2) / sp;
	
	printf("%.1f \n", med);
	
	system("pause");
	
	return 0;
}
