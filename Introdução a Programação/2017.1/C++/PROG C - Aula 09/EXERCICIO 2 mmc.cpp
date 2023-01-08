/*Escreva um programa que, dados dois números, imprima o MMC(Minimo Multiplo Comum)// 
mmc = (x*y)/mdc*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include<stdio.h>
#include<stdlib.h>

int main(){

	int num,num2, x, y, r, mmc;

	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	printf("Digite outro numero inteiro: ");
	scanf("%d",&num2);

	x = num;
	y = num2;

	do{
		r = x % y;
		x = y;
		y = r;
	}while(r!=0);
	
	mmc=(num*num2)/x;

	printf("O MMC entre %d e %d e: %d\n",num,num2,mmc);
	return 0;
}