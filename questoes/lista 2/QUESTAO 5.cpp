/*5.  Fa�a um algoritmo que determine se um determinado ano lido � bissexto. Sendo que 
um ano � bissexto se for divis�vel por 400 ou se for divis�vel por 4 e n�o for divis�vel 
por 100. Por exemplo: 1988, 1992, 1996 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int ano;
	printf("\n\nDigite um ano qualquer: ");
	scanf("%i",&ano);
	if(ano%400==0){
		printf("\nO ano %i � um ano bissexto.\n",ano);
	}else if(ano%4==0 && ano%100!=0){
		printf("\nO ano %i � um ano bissexto..\n",ano);
	}else{
		printf("\nO ano %i n�o � um ano bissexto.\n",ano);
	}
	
	getchar();
	//system("pause");
	return 0;
}
