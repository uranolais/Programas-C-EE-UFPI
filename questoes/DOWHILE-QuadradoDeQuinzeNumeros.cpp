/* Escreva um programa que, dados 15 n�meros, 
imprima seus quadrados. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num=0,quadrado=0,i=0;
	do{
		//system("cls");
		printf("\nDigite um n�mero: \n");
		scanf("%i",&num);
		quadrado=pow(num,2);
		printf("\nO quadrado de %i �: %i \n",num,quadrado);
		i+=1;
		num=0;
		quadrado=0;
	}while(i<15);
	system("pause");
	return 0;
}
