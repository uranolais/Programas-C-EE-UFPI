/*. Fa�a um programa que receba um nome e o
imprima ao contr�rio.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	char nome[50];
	printf("\n\nDigite um nome: ");
	gets(nome);
	strrev(nome);
	printf("\n\nO nome invertido �:%s\n\n",nome);
	
	system("pause");
	return 0;
}
