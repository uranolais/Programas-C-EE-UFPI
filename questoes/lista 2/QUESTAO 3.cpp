/*3. Fa�a um algoritmo que leia um n�mero inteiro e verifique se esse n�mero � par ou 
�mpar. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i;
	printf("\nDigite um n�mero inteiro qualquer: \n");
	scanf("%i",&i);
	if(i<0){
		i=i*(-1);
	}
	if (i%2==0){
		printf("\nO n�mero %i � par.\n",i);
	}else if (i%2!=0){
		printf("\nO n�mero %i � impar.\n",i);
	}
	getchar();
	//system("pause");
	return 0;
}
