#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Ambr�sio's Rocket \n");
	
	float a, b, c;
	float f1, f2, f3, f4;
	
	printf("Valor a: ");
	scanf("%f", &a);
	
	printf("Valor b: ");
	scanf("%f", &b);
	
	printf("Valor c: ");
	scanf("%f", &c);
	
	f1 = (a * b) / c;
	f2 = pow(a, 2) + b + (5*c);
	f3 = a * b * c + (c/3) * 5 - 1;
	f4 = pow((a * b * c), 3) / 2;
	
	printf("\n Os C�lculos de Ambr�sio resultaram em: \n F�RMULA 1 - %.3f \n F�RMULA 2 - %.3f \n F�RMULA 3 - %.3f \n F�RMULA 4 - %.3f \n  ", f1, f2, f3, f4);
	
	system("pause");
	
	return 0;
}
