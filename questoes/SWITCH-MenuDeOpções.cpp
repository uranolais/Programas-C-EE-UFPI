/* 1. Faça um programa que exiba um menu ao
usuário com as seguintes opções: 1-Inclusão, 2-
Exclusão, 3-Sair. Ao usuário selecionar uma
opção o programa deverá mostrar um texto
correspondendo à opção selecionada. Mostre
“opção inválida”, caso seja diferente de 1, 2 ou 3.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i;
	printf("\n\n********** MENU **********\n\n");
	printf("\n1-Inclusão\n");
	printf("\n2-Exclusão\n");
	printf("\n3-Sair\n");
	printf("\nSua opção:");
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
			printf("\nOpção Inválida\n");
	}
	
	system("pause");
	return 0;
}
