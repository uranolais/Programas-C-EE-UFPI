/*Fa�a um programa que leia um n�mero e verifique se ele � par ou �mpar.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int num1;

	printf("Digite um valor inteiro:\n");
	scanf("%i", &num1);

	if (num1%2==0)
	{
		printf("\nVOC� DIGITOU UM NUMERO PAR!!!!\n");

	}

	else
	{
		printf("\nVOC� DIGITOU UM NUMERO IMPAR!!!!\n");
	}

}
