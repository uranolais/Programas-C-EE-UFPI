/*1. Faça um algoritmo que leia um número 
e retorne seu antecessor e seu sucessor. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	printf("\nDigite um número:");
	scanf("%i",&num);
	system("cls");
	printf("\nSeu número é: %i",num);
	printf("\nSeu antecessor é: %i ",num-1);
	printf("\nSeu sucessor é: %i",num+1);
	
	
	
	getchar();
	//system("pause");
	return 0;
}
