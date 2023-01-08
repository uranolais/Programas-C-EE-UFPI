/*Faça um programa que resolva uma equação do primeiro grau (ax + b = 0).*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	float a, b, result;

	printf("Considerando a estrutura de uma equação de 1º grau, sendo: ax + b\nDefina a e b:\n");
	printf("a=");
	scanf("%f", &a);
	printf("b=");
	scanf("%f", &b);
	printf("Temos, então, a seguinte equação: %.0fx + %.0f = 0\n", a, b);

	result = (-b) / (a);


	printf("\nLogo o resultado desta equação é %.2f\n", result);

	return 0;
}
