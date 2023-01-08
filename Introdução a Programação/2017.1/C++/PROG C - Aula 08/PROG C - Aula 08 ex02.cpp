/*Faça um programa que crie um menu com as opções a
seguir, sendo que, quando o usuário selecionar uma
opção, o programa apenas irá apresentar o texto
“Opção nome_da_opção escolhida”, com exceção da
opção 4 que fará o programa terminar sua execução:
1 – Cadastrar 2 – Alterar 3 – Excluir 4 – Sair*/
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
		printf("\nDigite uma Opção a seguir:\n1-Cadastrar\n2-Alterar\n3-Excluir\n4-Sair\n");
		scanf("%i", &opcao);

		switch(opcao)
		{
		case 1:
			printf("\nOpção Cadastrar\n");
			break;
		case 2:
			printf("\nOpção Alterar\n");
			break;
		case 3:
			printf("\nOpção Excluir\n");
			break;
		case 4:
			printf("\nSAIR\n");
			return 0;
			break;
		default:
			printf("\nOPÇÃO INVÁLIDA\n");
			break;

		}
	}
}
