/*7.  Elabore  um  programa  que  pe�a  ao  usu�rio  para  digitar  10  valores.  Some  esses 
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
		printf("\nDigite um n�mero:");
		scanf("%i",&valores[i]);
		soma+=valores[i];
	}printf("\nA soma �: %i\n",soma);
	
	getchar();
	//system("pause");
	return 0;
}
