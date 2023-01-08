/*Fa�a um programa que receba um ano e verifique se
ele � bissexto. Um ano � bissexto se for divis�vel por
quatrocentos ou se ele for divis�vel por quatro mas n�o
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
		printf("\nVOC� DIGITOU UM ANO BISSEXTO!!!!\n");

	}

	else
	{
		printf("\nVOC� DIGITOU UM ANO N�O BISSEXTO!!!!\n");
	}

}
