// Autor(a)    : Jardeanne da Silva Ferreira
// esa coisa aqui vai somar todos os numeros que voce digitar ate vc pedir pra sair

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float numero;
	float soma = 0;
	while (numero != -1)
	{
		printf("Digite um numero (-1 para sair): ");
		scanf("%f", &numero);
		if (numero != -1)
		{
			soma = soma + numero;
		}
	}
printf("O resultado da soma e: % f ", soma);
	return 0;
}
