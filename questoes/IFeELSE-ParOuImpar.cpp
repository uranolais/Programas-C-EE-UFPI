/*Faça um programa que leia um número e
imprima se ele é par ou ímpar.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	printf("\nDigite um numero inteiro postitivo qualquer:\n");
	scanf("%i",&num);
	if (num%2==0){
		printf("\nO NÚMERO É PAR\n");
	}else if (num%2!=0){
		printf("\nO NÚMERO É ÍMPAR\n");
		
	}
	system("pause");
	return 0;
}
