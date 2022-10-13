#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("IMC Calc++ \n");
	
	float h, m, imc;
	
	printf("Sua Altura em Metros: ");
	scanf("%f", &h);
	
	printf("Sua massa em Quilos: ");
	scanf("%f", &m);
	
	imc = m / pow(h, 2);
	
	printf("\n Seu IMC é igual a: %.2f \n  ", imc);
	
	system("pause");
	
	return 0;
}
