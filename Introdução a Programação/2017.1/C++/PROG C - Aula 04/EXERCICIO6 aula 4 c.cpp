/*Fa�a um programa que receba tr�s n�meros e imprima o menor deles*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int num1, num2, num3;

	printf("Digite tr�s valores inteiros: \n\n\n");
	scanf("%i", &num1);
	scanf("%i", &num2);
	scanf("%i", &num3);
//distintos
	if (num1 < num2 && num1 < num3) //num1 menor
	{
		printf("\nO menor numero �: %i.\n", num1);
	}

	if (num2 < num1 && num2 < num3)//num2 menor
	{
		printf("\nO menor numero �: %i.\n", num2);
	}

	if (num3 < num2 && num3 < num1)//num3 menor
	{
		printf("\nO menor numero �: %i.\n", num3);
	}
//dois iguais
	if (num1 == num2 && num3 < num1)//1 e 2 iguais num3 menor
	{
		printf("\nO menor numero �: %i.\n", num3);
	}

	if (num1 == num2 && num3 > num1)//1 e 2 iguais num1 menor
	{
		printf("\nO menor numero �: %i.\n", num1);
	}

	if (num1 == num3 && num1 < num2)//1 e 3 iguais num1 menor
	{
		printf("\nO menor numero �: %i.\n", num1);
	}

	if (num1 == num3 && num1 > num2)//1 e 3 iguais num2 menor
	{
		printf("\nO menor numero �: %i.\n", num2);
	}

	if (num2 == num3 && num1 < num2)//2 e 3 iguais num1 menor
	{
		printf("\nO menor numero �: %i.\n", num1);
	}

	if (num2 == num3 && num1 > num2)//2 e 3 iguais num2 menor
	{
		printf("\nO menor numero �: %i.\n", num2);
	}
	//tres iguais
	if (num2 == num3 && num1 == num2)//tres numeros iguais
	{
		printf("\nVOC� DIGITOU TRES NUMEROS IGUAIS.\n");
	}
}
