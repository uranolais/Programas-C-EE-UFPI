/*Faça um programa que receba um mês do ano (em formato numérico) e imprima a 
quantidade de dias que ele possui (considere fevereiro contendo 28 dias).*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int ano;
	
	printf("Digite o valor numerico do Mes atual:");
	scanf("%i", &ano);
	
	if (ano>=13){
		printf("Digite um valor válido!");
	}
	if( ano==1 || ano==3 || ano==5 || ano==7 || ano==8 || ano==10 || ano==12){
		printf("O Mes digitado tem 31 dias");
	}
	
	if( ano==2){
		printf("O Mes digitado tem 28 dias");
	}
	
	if( ano==4 || ano==6 || ano== 9 || ano==11){
		printf("O Mes digitado tem 30 dias");
	}
	
	return 0;
}