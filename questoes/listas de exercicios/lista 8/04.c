#include <stdio.h>

int main()
{
	int ehPerfeito (int n);
	void imprimePerfeitos (int n1, int n2);

	int x, y;

	scanf("%d %d", &x, &y);

	imprimePerfeitos(x, y);

	return 0;
}

int ehPerfeito (int n)
{
	int i, soma = 0;

	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
			soma += i;
	}

	if(soma == n)
		return 1;
	else
		return 0;
}
void imprimePerfeitos (int n1, int n2)
{
	int i;

	for(i = n1; i < n2; i++)
	{
		if(ehPerfeito(i) == 1)
			printf("%d eh perfeito\n", i);
	}
}
