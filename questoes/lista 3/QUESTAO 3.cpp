/*3.  Fa�a duas vers�es deum algoritmo que leia um n�mero inteiro positivo N e imprima 
todos os n�meros naturais de 0 at� N em ordem crescente. Na primeira vers�o use 
enquanto e na segunda vers�o use para. */
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
