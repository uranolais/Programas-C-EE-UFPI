/*Faça um programa que receba um número e exiba seu sucessor e antecessor.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	int num, ant, suc;

	printf("Digite um valor numérico inteiro:\n");
	scanf("%i", &num);

	ant=num-1;
	suc=num+1;
	
	printf("\nO antecessor do número digitado é %i e seu sucessor é %i.\n", ant, suc);

	return 0;
}
