/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int fatorial(int x);
	int numero,resultado;
	printf("\nDigite um n�mero inteiro:\n");
	scanf("%i",&numero);
	resultado=fatorial(numero);
	printf("\nO fatorial de %i �: %i\n",numero,resultado);
	system("pause");
	return 0;
}
int fatorial(int x){
	int resultado;
	if(x==0){
		resultado=1;
	}else{
		resultado=x*(fatorial(x-1));//� como se fizessem varias copias dessa fun�ao at� atingir o if x==0;
	}
	return resultado;
}
