#include <stdio.h>
int main()
{
	int leNaoNegativo();
	int saoAmigos (int n1, int n2);
	
	int n1, n2, n3;
	printf("Digite dois numeros pares e positivos: ");
	while (1)
	{
		n1 = leNaoNegativo();
		n2 = leNaoNegativo();
		if ((n1 == 0) && (n2 == 0))
			break;
		n3 = saoAmigos (n1, n2);
		if (n3 == 1)
			printf("SAO AMIGOS");
		else
			printf("NAO SAO AMIGOS");
		return 0;

	}
	return 0;
}

int leNaoNegativo()
{
	int n;
	scanf("%d", &n);
	if (n < 0)
	{
		do
		{
			printf("Digite um numero valido: ");
			scanf("%d", &n);
		}
		while (n < 0);
	}
	return n;
}

int saoAmigos (int n1, int n2)
{
	int somaDivisores (int n);

	if ((somaDivisores (n1) == n2) && (somaDivisores (n2) == n1))
		return  1;
	else
		return 0;
}

int somaDivisores (int n)
{
	int i;
	int soma = 0;
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
			soma += i;
	}

	return soma;
}
