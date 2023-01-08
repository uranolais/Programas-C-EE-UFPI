/*3. Faça um algoritmo que leia um número inteiro e verifique se esse número é par ou 
ímpar. */
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
	printf("\nDigite um número inteiro qualquer: \n");
	scanf("%i",&i);
	if(i<0){
		i=i*(-1);
	}
	if (i%2==0){
		printf("\nO número %i é par.\n",i);
	}else if (i%2!=0){
		printf("\nO número %i é impar.\n",i);
	}
	getchar();
	//system("pause");
	return 0;
}
