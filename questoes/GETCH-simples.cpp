/*Escreva um programa que leia um caracter digitado
pelo usu�rio, imprima o caracter digitado e o c�digo
correspondente ASCII correspondente a este caracter.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	char a;
	printf("\nDigite um caracter:\n");
	//a = getche();
	a = getch();
	printf("\nVoce digitou: %c \n",a);
	system("pause");
	return 0;
}
