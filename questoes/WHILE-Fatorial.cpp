/* Fazer um programa que calcule e imprima o fatorial de um
n�mero fornecido pelo usu�rio, usando o comando while.
Repetir a execu��o do programa tantas vezes at� o usu�rio
responder n�o (Lembrando o c�lculo do fatorial: n! = n * n-1 *
n-2 * ... * 2 * 1.
Por exemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120).
Exemplo de tela de sa�da:
Entre com um n�mero: 5
O fatorial de 5 � 120
Outro n�mero (sim/n�o)? n�o.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i=0;
	int b=1;
	int num=0;
	int fat=1;
	char a;
	printf("\n\n*=*=*=*=*=*=*=*=*=* FATORIAL *=*=*=*=*=*=*=*=*=*\n\n");
	while(i!=-1){
		printf("\nDeseja continuar?\n");
		printf("\nDigite s para sim\n");
		printf("\nDigite n para n�o\n");
		printf("\nSua Resposta: \n");
		a = getch();
		if (a=='s'){
			system("cls");
			printf("\nDigite o n�mero: \n");
			scanf("%i",&num);
			while(b<=num){
				fat=fat*b;
				b=b+1;
			}
			printf("\nO fatorial de %i �: %i \n",num,fat);
			
		}else if(a=='n'){
			system("cls");
			printf("\n\nObrigada por participar do programa!\n\n");
			i=-1;
		}else if(a!='s' && a!='n'){
			system("cls");
			printf("\nOp��o Inv�lida!\n");
		}
	}
	system("pause");
	return 0;
}
