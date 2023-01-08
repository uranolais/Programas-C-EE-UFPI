/*2. Faça um programa que receba seu nome e
sobrenome em variáveis separadas e imprima
seu nome completo numa só linha. seu nome completo numa só linha.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	char nome[20],sobrenome[50];
	printf("\nDigite o seu nome:");
	gets(nome);
	printf("\nDigite seu sobrenome:");
	gets(sobrenome);
	printf("\n\nSeu nome completo é:%s %s\n\n",nome,sobrenome);
	
	
	system("pause");
	return 0;
}
