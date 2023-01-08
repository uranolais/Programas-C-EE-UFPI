/*6.  Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e 
terminando em 0. Mostre uma mensagem “FIM!” após a contagem. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	for (int i=10;i>=0;i--){
		printf("\n%i\n",i);
	}printf("\nFIM!\n");
	
	getchar();
	//system("pause");
	return 0;
}
