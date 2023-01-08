/*3.  Faça duas versões deum algoritmo que leia um número inteiro positivo N e imprima 
todos os números naturais de 0 até N em ordem crescente. Na primeira versão use 
enquanto e na segunda versão use para. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n,i=0;
	printf("\nDigite um numero inteiro qualquer: ");
	scanf("%i",&n);
	for(i=0;i<=n;i++){
		printf("%i ",i);
	}printf("\n");
	
	getchar();
	//system("pause");
	return 0;
}
