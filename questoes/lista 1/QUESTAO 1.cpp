/*1. Fa�a um algoritmo que leia um n�mero 
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
	printf("\nDigite um n�mero:");
	scanf("%i",&num);
	system("cls");
	printf("\nSeu n�mero �: %i",num);
	printf("\nSeu antecessor �: %i ",num-1);
	printf("\nSeu sucessor �: %i",num+1);
	
	
	
	getchar();
	//system("pause");
	return 0;
}
