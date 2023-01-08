/*3. Dado um inteiro positivo n, calcular e imprimir o valor da seguinte soma:
1/n +2/n-1 +3/n-2 (...)+n/1*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	double n,i,soma=0;
	printf("\nDigite um número inteiro: ");
	scanf("%lf",&n);
	for (i=0;i<n;i++){
		soma = soma+((i+1)/(n-i));
	}printf("\nA soma é:%.2lf",soma);
	getchar();
	//system("pause");
	return 0;
}
