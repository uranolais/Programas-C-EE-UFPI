/*Fa�a um programa que receba um n�mero inteiro e calcule o resto da divis�o por 2.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	int num, resto;

	printf("Digite um valor num�rico inteiro:\n");
	scanf("%i", &num);

	resto = num % 2;
	printf("\nO resto da divis�o n�mero fornecido dividido por dois �: %i\n", resto);

	return 0;
}
