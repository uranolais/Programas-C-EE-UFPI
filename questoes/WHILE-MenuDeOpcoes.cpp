/*Fa�a um programa que crie um menu com as op��es a
seguir, sendo que, quando o usu�rio selecionar uma
op��o, o programa apenas ir� apresentar o texto
�Op��o nome_da_op��o escolhida�, com exce��o da
op��o 4 que far� o programa terminar sua execu��o: 1
� Cadastrar 2 � Alterar 3 � Excluir 4 � Sair*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i=0;
	while(i!=4){
		//system("cls");
		printf("\n\n*=*=*=*=*=*=*=*=*=* MENU *=*=*=*=*=*=*=*=*=*\n\n");
		printf("\n1-Cadastrar\n");
		printf("\n2-Alterar\n");
		printf("\n3-Excluir\n");
		printf("\n4-Sair\n");
		printf("\nSua Escolha:");
		scanf("%i",&i);
		if (i>4 || i<=0){
			printf("\nOp��o Inv�lida\n");
		}else if(i==1){
			printf("\nOp��o Cadastrar Selecionada!\n");
		}else if(i==2){
			printf("\nOp��o Alterar Selecionada!\n");
		}else if(i==3){
			printf("\nOp��o Excluir Selecionada!\n");
		}
	}
	system("pause");
	return 0;
}
