// Autor(a)    : Jardeanne da Silva Ferreira

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numero;
	int soma = 0;

	do
	{
		printf("Digite um numero (-1 para sair e obter a soma dos umeros digitados):");
		scanf("%i", &numero);
		if (numero != -1)
		{
			soma = soma + numero;
		}
	}

	while (numero != -1);
	printf("O resultado da soma e: % i", soma);


	do
	{
		return 0;
	}

	while (numero == -1);
	return 0;
}