/*Faça um programa que receba um número inteiro e calcule o resto da divisão por 2.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	int num, resto;

	printf("Digite um valor numérico inteiro:\n");
	scanf("%i", &num);

	resto = num % 2;
	printf("\nO resto da divisão número fornecido dividido por dois é: %i\n", resto);

	return 0;
}
