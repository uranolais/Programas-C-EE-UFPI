/*4. Faça um programa que receba um nome e
conte quantos caracteres possui a palavra
recebida.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	char nome[20];
	printf("\n\nDigite um nome qualquer: ");
	gets(nome);
	int t=strlen(nome);
	printf("\nO nome %s tem %i caracteres\n\n",nome,t);
	
	system("pause");
	return 0;
}
