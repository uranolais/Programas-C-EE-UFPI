/*Fa�a um programa que leia um n�mero e
imprima se ele � par ou �mpar.*/
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
		printf("\nO N�MERO � PAR\n");
	}else if (num%2!=0){
		printf("\nO N�MERO � �MPAR\n");
		
	}
	system("pause");
	return 0;
}
