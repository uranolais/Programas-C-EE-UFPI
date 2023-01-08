/* Faça um programa que calcule e imprima os
números divisíveis por 3 entre 10 e 450.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i;
	for(i=12;i<450;i=i+3){
		printf("\n%i\n",i);
	}
	system("pause");
	return 0;
}
