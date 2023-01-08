/*2.  Faça um algoritmo que leia dois números e mostre o maior deles. Se, por acaso, os 
dois números forem iguais, imprima a mensagem “Números iguais”. */
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
	printf("\nDigite o primeiro número: ");
	scanf("%i",&i);
	printf("\nDigite o segundo número: ");
	scanf("%i",&j);
	if(i==j){
		printf("\nNÚMEROS IGUAIS!\n");
	}else if(i>j){
		printf("\nO número %i é o maior.\n",i);
	}else{
		printf("\nO número %i é o maior. \n",j);
	}
	getchar();
	//system("pause");
	return 0;
}
