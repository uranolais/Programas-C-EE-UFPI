/*4.  Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros 
n�meros naturais �mpares. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,n=1;
	printf("\nDigite um n�mero qualquer: ");
	scanf("%i",&i);
	for (n=1;n<=i;n=n+2){
		printf(" %i ",n);
		
	}printf("\n");
	
	getchar();
	//system("pause");
	return 0;
}
