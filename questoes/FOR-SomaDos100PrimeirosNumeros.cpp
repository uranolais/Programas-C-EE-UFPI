/*Faça um programa que calcule a soma dos 100
primeiros números naturais.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int soma,i;
	soma=0;
	for(i=0;i<=100;i++){
		soma+=i;
	}
	printf("\nA soma dos 100 primeiros numeros naturais é: %i\n",soma);
	system("pause");
	return 0;
}
