/*Fa�a um programa que receba um n�mero e exiba seu sucessor e antecessor.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	int num, ant, suc;

	printf("Digite um valor num�rico inteiro:\n");
	scanf("%i", &num);

	ant=num-1;
	suc=num+1;
	
	printf("\nO antecessor do n�mero digitado � %i e seu sucessor � %i.\n", ant, suc);

	return 0;
}
