/*Escreva um programa que, dados 15 números, imprima seus quadrados.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
	int numero, quadrado;
	int n = 0;

	setlocale(LC_ALL, "portuguese");

	do
	{
		n++;
		printf("Digite um numero inteiro: ");
		scanf("%i", &numero);
		quadrado = pow(numero, 2);
		printf("O quadrado do numero digitado é: %i\n\n", quadrado);
	}

	while (n < 15);
	return 0;
}
