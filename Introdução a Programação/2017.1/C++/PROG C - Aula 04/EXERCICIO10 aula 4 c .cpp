/*Faça um programa que receba um ano e verifique se
ele é bissexto. Um ano é bissexto se for divisível por
quatrocentos ou se ele for divisível por quatro mas não
por cem.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int ano;

	printf("Digite um ano:\n");
	scanf("%i", &ano);

	if (ano%400==0 || ano%4==0 && ano%100!=0)
	{
		printf("\nVOCÊ DIGITOU UM ANO BISSEXTO!!!!\n");

	}

	else
	{
		printf("\nVOCÊ DIGITOU UM ANO NÃO BISSEXTO!!!!\n");
	}

}
