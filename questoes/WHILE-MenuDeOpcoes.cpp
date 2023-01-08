/*Faça um programa que crie um menu com as opções a
seguir, sendo que, quando o usuário selecionar uma
opção, o programa apenas irá apresentar o texto
“Opção nome_da_opção escolhida”, com exceção da
opção 4 que fará o programa terminar sua execução: 1
– Cadastrar 2 – Alterar 3 – Excluir 4 – Sair*/
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
			printf("\nOpção Inválida\n");
		}else if(i==1){
			printf("\nOpção Cadastrar Selecionada!\n");
		}else if(i==2){
			printf("\nOpção Alterar Selecionada!\n");
		}else if(i==3){
			printf("\nOpção Excluir Selecionada!\n");
		}
	}
	system("pause");
	return 0;
}
