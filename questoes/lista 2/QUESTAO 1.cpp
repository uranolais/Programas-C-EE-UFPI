/*1. Fa�a um algoritmo que leia um n�mero qualquer e multiplique-o por tr�s. Apresente 
o resultado da multiplica��o se o resultado for maior que 30. */
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
	printf("\nDigite um n�mero qualquer:");
	scanf("%i",&n);
	m=n*3;
	if(m>30){
		printf("\nO resultado da m�ltiplica��o de %i por 3 � %i.\n",n,m);
	}else{
		printf("\nS� ter� acesso ao resultado se ele for maior que 30.\n");
	}
	
	getchar();
	//system("pause");
	return 0;
}
