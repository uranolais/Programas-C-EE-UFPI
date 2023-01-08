/*Faça um programa que crie um menu com as opções a seguir, sendo que,
quando o usuário selecionar uma opção,o programa apenas irá apresentar
o texto “Opção nome_da_opção escolhida”, com exceção da opção 4 que fará
o programa terminar sua execução:
1– Cadastrar
2– Alterar
3– Excluir
4– Sair*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a = 0;

	setlocale(LC_ALL, "portuguese");


	while (a != 4)
	{
		printf("Digite uma das opções a seguir:\n1 – Cadastrar\n2 – Alterar\n3 – Excluir\n4 – Sair\n\n");
		scanf("%i", &a);

		if(a > 4)
		{
			printf("\n\nOPÇÃO INVÁLIDA\n\n");
		}
		else
		{
			switch(a)
			{

			case 1:
				printf("Opção Cadastrar escolhida.\n\n");
				break;
			case 2:
				printf("Opção Alterar escolhida.\n\n");
				break;
			case 3:
				printf("Opção Excluir escolhida.\n\n");
				break;

			}

		}
	}


	return 0;
}


