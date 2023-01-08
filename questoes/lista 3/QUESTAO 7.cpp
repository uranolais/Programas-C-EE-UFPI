/*7.  Elabore  um  programa  que  peça  ao  usuário  para  digitar  10  valores.  Some  esses 
valores e apresente o resultado na tela. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int valores[10],i,soma=0;
	for(i=0;i<10;i++){
		printf("\nDigite um número:");
		scanf("%i",&valores[i]);
		soma+=valores[i];
	}printf("\nA soma é: %i\n",soma);
	
	getchar();
	//system("pause");
	return 0;
}
