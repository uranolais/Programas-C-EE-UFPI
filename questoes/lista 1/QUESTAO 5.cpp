/*5. Faça um programa que calcule o ano 
de nascimento de uma pessoa a partir de sua 
idade e do ano atual. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int ano,idade,anon;
	printf("\nDigite o ano em que estamos: ");
	scanf("%i",&ano);
	printf("\nDigite a sua idade: ");
	scanf("%i",&idade);
	anon=ano-idade;
	system("cls");
	printf("\nVocê nasceu em: %i\n",anon);
	
	getchar();
	//system("pause");
	return 0;
}
