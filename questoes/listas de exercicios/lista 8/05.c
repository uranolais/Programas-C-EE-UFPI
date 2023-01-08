#include <stdio.h>
int main()
{
	int fatotial (int n);

	int n, k;
	printf("Digite o arranjo de n elementos tomados k a k:");
	printf("\nn = ");
	scanf("%d", &n);
	printf("k = ");
	scanf("%d", &k);
	printf("RESULTADO = %d", fatotial(n) / fatotial(n - k));
	return 0;
}

int fatotial (int n)
{
	if (n == 0 || n == 1)
		return 1;
	int i;
	for (i = n - 1; i > 1; i--)
		n *= i;

	return n;
}
