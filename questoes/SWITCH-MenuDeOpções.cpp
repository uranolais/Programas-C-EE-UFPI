/* 1. Fa�a um programa que exiba um menu ao
usu�rio com as seguintes op��es: 1-Inclus�o, 2-
Exclus�o, 3-Sair. Ao usu�rio selecionar uma
op��o o programa dever� mostrar um texto
correspondendo � op��o selecionada. Mostre
�op��o inv�lida�, caso seja diferente de 1, 2 ou 3.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i;
	printf("\n\n********** MENU **********\n\n");
	printf("\n1-Inclus�o\n");
	printf("\n2-Exclus�o\n");
	printf("\n3-Sair\n");
	printf("\nSua op��o:");
	scanf("%i",&i);
	switch(i){
		case 1:
			printf("\nIncluido com sucesso!\n");
			break;
		case 2:
			printf("\nExcluido com sucesso!\n");
			break;
		case 3:
			printf("\nEncerrado com sucesso!\n");
			break;
		default:
			printf("\nOp��o Inv�lida\n");
	}
	
	system("pause");
	return 0;
}
