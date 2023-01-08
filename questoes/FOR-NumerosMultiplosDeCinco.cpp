/*Escreva um programa que imprima os números de 
100 a 600 que são múltiplos de 5. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,m;
	for(i=100;i<=600;i=i+5){
		printf("\nO número %i é múltiplo de 5\n",i);
	}
	system("pause");
	return 0;
}
