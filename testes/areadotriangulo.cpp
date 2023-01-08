#include <stdio.h>
#include <stdlib.h>
int main()
{
	int base;
	float altura;
	float area;
	printf("Digite a base do triangulo:");
	scanf("%i",&base);
	printf("Digite a altura do triangulo:");
	scanf("%f",&altura);
	area=(base*altura)/2;
	printf("A area do triangulo e: %0.2f \n",area);
	system("pause");
	return 0;
}
