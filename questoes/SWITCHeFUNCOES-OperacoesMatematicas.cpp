/* 3. Faça um programa que receba dois valores e exiba
um menu para o usuário escolher uma das quatro
operações aritméticas. Baseado nessa escolha o
programa deverá calcular e imprimir o resultado.*/
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
	printf("\nDigite o primeiro número:");
	scanf("%i",&p);
	printf("\nDigite o segundo número:");
	scanf("%i",&s);
	printf("\n\n********** MENU **********\n\n");
	printf("\n1-SOMA\n");
	printf("\n2-SUBTRAÇÃO\n");
	printf("\n3-MULTIPLICAÇÃO\n");
	printf("\n4-DIVISÃO\n");
	printf("\n5-SAIR\n");
	printf("\nSua opção:\n");
	scanf("%i",&i);
	switch(i){
		case 1:
			printf("\nA soma de %i com %i é: %i\n",p,s,soma(p,s));
			break;
		case 2:
			printf("\nA subtração de %i com %i é: %i\n",p,s,subtracao(p,s));
			break;
		case 3:
			printf("\nA multiplicação de %i com %i é: %i\n",p,s,multiplicacao(p,s));
			break;
		case 4:
			printf("\nA divisão de %i com %i é aproximadamente: %i\n",p,s,divisao(p,s));
			break;
		case 5:
			printf("\nO programa será encerrado!\n");
			break;
		default:
			printf("\nOPÇÃO INVÁLIDA\n");
			break;
	}

	system("pause");
	return 0;
}
