/*2.  Fa�a um algoritmo que leia dois n�meros e mostre o maior deles. Se, por acaso, os 
dois n�meros forem iguais, imprima a mensagem �N�meros iguais�. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,j;
	printf("\nDigite o primeiro n�mero: ");
	scanf("%i",&i);
	printf("\nDigite o segundo n�mero: ");
	scanf("%i",&j);
	if(i==j){
		printf("\nN�MEROS IGUAIS!\n");
	}else if(i>j){
		printf("\nO n�mero %i � o maior.\n",i);
	}else{
		printf("\nO n�mero %i � o maior. \n",j);
	}
	getchar();
	//system("pause");
	return 0;
}
