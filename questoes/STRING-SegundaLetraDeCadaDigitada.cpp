/*Escreva um programa que leia duas strings e as
coloque na tela. Imprima também a segunda letra de
cada string.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[10];
	char b[20];
	printf("\nDigite duas palavras(uma em cada linha):\n");
	gets(a);
	gets(b);
	printf("\nAs duas strings sao: \n %s %s",a,b);
	printf("\nA segunda letra de cada string sao: %c %c \n",a[1],b[1]);
	system("pause");
	return 0;
}
