/*Fa�a um programa que crie um menu com as op��es a
seguir, sendo que, quando o usu�rio selecionar uma
op��o, o programa apenas ir� apresentar o texto
�Op��o nome_da_op��o escolhida�, com exce��o da
op��o 4 que far� o programa terminar sua execu��o:
1 � Cadastrar 2 � Alterar 3 � Excluir 4 � Sair*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main()
{

	int opcao;
	
	setlocale(LC_ALL, "portuguese");

	while (opcao != 4)
	{
		printf("\nDigite uma Op��o a seguir:\n1-Cadastrar\n2-Alterar\n3-Excluir\n4-Sair\n");
		scanf("%i", &opcao);

		switch(opcao)
		{
		case 1:
			printf("\nOp��o Cadastrar\n");
			break;
		case 2:
			printf("\nOp��o Alterar\n");
			break;
		case 3:
			printf("\nOp��o Excluir\n");
			break;
		case 4:
			printf("\nSAIR\n");
			return 0;
			break;
		default:
			printf("\nOP��O INV�LIDA\n");
			break;

		}
	}
}
