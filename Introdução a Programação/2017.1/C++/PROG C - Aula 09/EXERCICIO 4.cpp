/*Escreva um programa que imprima os seguintes
dados na tela.
1-1 1-2 1-3 1-4 1-5
2-1 2-2 2-3 2-4 2-5
3-1 3-2 3-3 3-4 3-5
4-1 4-2 4-3 4-4 4-5
5-1 5-2 5-3 5-4 5-5*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 1;
	
	
	system("color 5f");

	do
	{
			
		printf("\n %i-1  %i-2  %i-3  %i-4  %i-5\n", x, x, x, x, x);
		x++;
	}
	while (x < 6);

	return 0;
}
