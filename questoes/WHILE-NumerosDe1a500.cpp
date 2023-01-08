/*Faça um programa que escreva os números de 10 a
500.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i=1;
	while(i<=500){
		printf("\n%i ",i);
		i+=1;
	}
	system("pause");
	return 0;
}
