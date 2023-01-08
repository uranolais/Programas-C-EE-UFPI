/*Escreva um programa que imprima os números de 
100 a 600 que são múltiplos de 5. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i=100;
	do{
		printf("\nO número %i é múltiplo de 5\n",i);
		i=i+5;
	}while(i<=600);
	system("pause");
	return 0;
}
