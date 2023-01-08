/*1.  Faça duas versões de um algoritmo que escreva seu nome 10x na tela. Um nome por 
linha. Na primeira versão use enquanto e na segunda versão use para. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	char nome[20];
	printf("\nDigite um nome:\n");
	gets(nome);
	for(int i=0;i<10;i++){
		printf("\n");
		puts(nome);
	}printf("\n");
	
	getchar();
	//system("pause");
	return 0;
}
