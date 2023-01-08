/*1. Faça um algoritmo que leia um número qualquer e multiplique-o por três. Apresente 
o resultado da multiplicação se o resultado for maior que 30. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n,m;
	printf("\nDigite um número qualquer:");
	scanf("%i",&n);
	m=n*3;
	if(m>30){
		printf("\nO resultado da múltiplicação de %i por 3 é %i.\n",n,m);
	}else{
		printf("\nSó terá acesso ao resultado se ele for maior que 30.\n");
	}
	
	getchar();
	//system("pause");
	return 0;
}
