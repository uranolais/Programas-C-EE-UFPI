/*2.  Faça duas versões de umque imprima os valores no intervalo de 99 à 9. Na primeira 
versão use enquanto e na segunda versão use para. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i=99;
	while(i>8){
		printf(" %i ",i);
		i--;
	}printf("\n");
	
	getchar();
	//system("pause");
	return 0;
}
