#include <stdio.h>

int main()
{
	float soma (int n);

	int n;
	scanf("%d", &n);
	printf("%.2f", soma(n));
	return 0;
}

float soma (int n)
{
	int i;
	float soma = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			soma -= 1.0 / i;
	
		else
			soma += 1.0 / i;
	}

	return soma;
}
