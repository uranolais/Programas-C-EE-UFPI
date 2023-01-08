/*Fa�a um programa que crie um menu com as op��es a seguir, sendo que,
quando o usu�rio selecionar uma op��o,o programa apenas ir� apresentar
o texto �Op��o nome_da_op��o escolhida�, com exce��o da op��o 4 que far�
o programa terminar sua execu��o:
1� Cadastrar
2� Alterar
3� Excluir
4� Sair*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a = 0;

	setlocale(LC_ALL, "portuguese");


	while (a != 4)
	{
		printf("Digite uma das op��es a seguir:\n1 � Cadastrar\n2 � Alterar\n3 � Excluir\n4 � Sair\n\n");
		scanf("%i", &a);

		if(a > 4)
		{
			printf("\n\nOP��O INV�LIDA\n\n");
		}
		else
		{
			switch(a)
			{

			case 1:
				printf("Op��o Cadastrar escolhida.\n\n");
				break;
			case 2:
				printf("Op��o Alterar escolhida.\n\n");
				break;
			case 3:
				printf("Op��o Excluir escolhida.\n\n");
				break;

			}

		}
	}


	return 0;
}


