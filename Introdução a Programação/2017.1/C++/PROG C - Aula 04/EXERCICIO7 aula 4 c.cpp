/*Fa�a um programa que receba dois n�meros e os imprima em ordem crescente.*/
// Autor(a)    : Jardeanne da Silva Ferreira


#include <stdio.h>

int main(int argc, char** argv)
{
	int num1, num2;

	printf("Digite dois valores inteiros: \n\n\n");
	scanf("%i", &num1);
	scanf("%i", &num2);

	if (num1 == num2)
	{
		printf("\nVOC� DIGITOU DOIS NUMEROS IGUAIS!!!\n");

	}

	if (num1 < num2)
	{
		printf("\n%i<", num1);
		printf("%i\n", num2);
	}
	if (num1 > num2)
	{
		printf("\n%i<", num2);
		printf("%i\n", num1);
	}

}
