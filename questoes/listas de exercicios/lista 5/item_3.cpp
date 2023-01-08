#include <stdio.h>
int main()
{
double soma=0, x=1, n, i;
scanf("%lf", &n);
	while (i<n)
	{
	soma+=x/(n-i);
	i++;
	x++;
	}
	printf("Soma = %.2lf", soma);	
return 0;
}