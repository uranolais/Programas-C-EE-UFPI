/*4. Fa�a um algoritmo para verificar se determinado n�mero inteiro lido � divis�vel por 3 
ou 5, mas n�o simultaneamente pelos dois. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	printf("\nDigite um n�mero inteiro: ");
	scanf("%i",&num);
	if(num%3==0 && num%5!=0){
		printf("\nO n�mero %i � divis�vel por 3!\n",num);
	}
	if(num%5==0 && num%3!=0){
		printf("\nO n�mero %i � divis�vel por 5!\n",num);
	}
	getchar();
	//system("pause");
	return 0;
}
