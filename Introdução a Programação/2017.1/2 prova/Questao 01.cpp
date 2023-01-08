// SEUS PUTO esse programa ta todo bonitnho, entao nao copia igual Calouro burro da porra
// ESSE PROGRAMA AQUI CALCULA O NOVO SALARIO COM REAJUSTE DE 8%.
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	char nome[255];
	float sal, novo;

	system("color 5F");

	printf ("\nINFORME O PRIMEIRO NOME DO FUNCIONÁRIO: ");
	scanf ("%s", &nome);
	printf ("\nINFORME O SALÁRIO: ");
	scanf ("%f", &sal);

	novo = sal * 1.08;

	printf ("\nO novo salário de %s é R$%.1f0.\n", nome, novo);


	return 0;
}
