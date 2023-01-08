/*Faça um programa que leia três valores do teclado e
verifique se o primeiro é maior que a soma dos outros
dois
Exercícios propostos
dois.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int pri, seg, ter, soma;
	printf("Digite o primeiro numero inteiro: \n");
	scanf("%i",&pri);
	printf("Digite o segundo numero inteiro: \n");
	scanf("%i",&seg);
	printf("Digite o terceiro numero inteiro: \n");
	scanf("%i",&ter);
	soma = seg + ter;
	if (pri > soma){
		printf("O primeiro numero %i e' maior que a soma dos dois outros numeros, sendo a soma: %i \n",pri,soma);
	}else if(pri==soma){
		printf("O primeiro numero %i e' igual que a soma dos dois outros numeros, sendo a soma: %i \n",pri,soma);
	}else
		printf("O primeiro numero %i e' menor que a soma dos dois outros numeros, sendo a soma: %i \n",pri,soma);
	system("pause");
	return 0;
} 
