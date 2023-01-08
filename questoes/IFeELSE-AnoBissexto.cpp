/* Faça um programa que receba um ano e verifique se 
ele é bissexto. Um ano é bissexto se for divisível por 
quatrocentos ou se ele for divisível por quatro mas não 
por cem.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ano;
	printf("\nDigite um ano qualquer\n");
	scanf("%i",&ano);
	if (ano%400==0){
		printf("\nO ano %i e' bissexto\n",ano);
	}else if(ano%4==0 and ano%100!=0){
		printf("\nO ano %i e' bissexto\n",ano);
	}else{
		printf("\nO ano %i nao e' bissexto\n",ano);
	}
	system("pause");
	return 0;
}
