/* 3. Fa�a um programa que receba dois valores e exiba
um menu para o usu�rio escolher uma das quatro
opera��es aritm�ticas. Baseado nessa escolha o
programa dever� calcular e imprimir o resultado.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int soma(int x, int y){
	return(x+y);
}
int subtracao(int x, int y){
	return(x-y);
}
int multiplicacao(int x, int y){
	return(x*y);
}
int divisao(int x, int y){
	return(x/y);
}
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int p,s,i;
	printf("\nDigite o primeiro n�mero:");
	scanf("%i",&p);
	printf("\nDigite o segundo n�mero:");
	scanf("%i",&s);
	printf("\n\n********** MENU **********\n\n");
	printf("\n1-SOMA\n");
	printf("\n2-SUBTRA��O\n");
	printf("\n3-MULTIPLICA��O\n");
	printf("\n4-DIVIS�O\n");
	printf("\n5-SAIR\n");
	printf("\nSua op��o:\n");
	scanf("%i",&i);
	switch(i){
		case 1:
			printf("\nA soma de %i com %i �: %i\n",p,s,soma(p,s));
			break;
		case 2:
			printf("\nA subtra��o de %i com %i �: %i\n",p,s,subtracao(p,s));
			break;
		case 3:
			printf("\nA multiplica��o de %i com %i �: %i\n",p,s,multiplicacao(p,s));
			break;
		case 4:
			printf("\nA divis�o de %i com %i � aproximadamente: %i\n",p,s,divisao(p,s));
			break;
		case 5:
			printf("\nO programa ser� encerrado!\n");
			break;
		default:
			printf("\nOP��O INV�LIDA\n");
			break;
	}

	system("pause");
	return 0;
}
