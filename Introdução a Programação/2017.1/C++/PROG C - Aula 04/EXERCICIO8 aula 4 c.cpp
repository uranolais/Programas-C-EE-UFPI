/*Faça um programa que leia um número e verifique se ele é par ou ímpar.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int num1;

	printf("Digite um valor inteiro:\n");
	scanf("%i", &num1);

	if (num1%2==0)
	{
		printf("\nVOCÊ DIGITOU UM NUMERO PAR!!!!\n");

	}

	else
	{
		printf("\nVOCÊ DIGITOU UM NUMERO IMPAR!!!!\n");
	}

}
