/*Fa�a um programa que receba tr�s n�meros e imprima o
menor deles.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;

	printf("\nDigite tr�s valores inteiros: ");
	scanf("%i%i %i", &a,&b,&c);
	if (a<b && a<c) 
	{
		printf("\nO menor numero e: %i.\n", a);
	}

	if (b<a && b<c)
	{
		printf("\nO menor numero e: %i.\n", b);
	}

	if (c<b && c<a)
	{
		printf("\nO menor numero e: %i.\n", c);
	}
	if (a==b && c<a)
	{
		printf("\nO menor numero e: %i.\n", c);
	}

	if (a==b && c>a)
	{
		printf("\nO menor numero e: %i.\n", a);
	}

	if (a==c && a<b)
	{
		printf("\nO menor numero e: %i.\n", a);
	}

	if (a==c && a>b)
	{
		printf("\nO menor numero e: %i.\n", b);
	}

	if (b==c && a<c)
	{
		printf("\nO menor numero e: %i.\n", a);
	}

	if (b==c && a>b)
	{
		printf("\nO menor numero e: %i.\n", b);
	}
	if (a==b && b==c)
	{
		printf("\nOS TRES NUMEROS SAO IGUAIS.\n");
	}
	system("pause");
	return 0;
}
