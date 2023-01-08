/*PEGAR A STRING POR SCANF*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	char nome[20],sobrenome[20];
	printf("\nDigite seu nome e sobrenome:\n");
	scanf("%s %s",&nome,&sobrenome);
	printf("%s %s\n",nome,sobrenome);
	
	system("pause");
	return 0;
}
