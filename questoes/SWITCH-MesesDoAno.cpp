/* 2.Fa�a um programa que receba o
valor inteiro e retorne o m�s do ano equivalente
(1 = janeiro, 2 = fevereiro, 3 = mar�o, ..., 12 =
dezembro). Se o valor recebido for maior que 12
ou menor que 1 dever� imprimir �m�s inv�lido�.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i;
	printf("\nDigite o n�mero para verificarmos que m�s ele representa:\n");
	scanf("%i",&i);
	switch(i){
		case 1:
			printf("\nO n�mero %i � equivalente ao m�s de: JANEIRO\n",i);
			break;
		case 2:
			printf("\nO n�mero %i � equivalente ao m�s de: FEVEREIRO\n",i);
			break;
		case 3:
			printf("\nO n�mero %i � equivalente ao m�s de: MAR�O\n",i);
			break;
		case 4:
			printf("\nO n�mero %i � equivalente ao m�s de: ABRIL\n",i);
			break;
		case 5:
			printf("\nO n�mero %i � equivalente ao m�s de: MAIO\n",i);
			break;
		case 6:
			printf("\nO n�mero %i � equivalente ao m�s de: JUNHO\n",i);
			break;
		case 7:
			printf("\nO n�mero %i � equivalente ao m�s de: JULHO\n",i);
			break;
		case 8:
			printf("\nO n�mero %i � equivalente ao m�s de: AGOSTO\n",i);
			break;
		case 9:
			printf("\nO n�mero %i � equivalente ao m�s de: SETEMBRO\n",i);
			break;
		case 10:
			printf("\nO n�mero %i � equivalente ao m�s de: OUTUBRO\n",i);
			break;
		case 11:
			printf("\nO n�mero %i � equivalente ao m�s de: NOVEMBRO\n",i);
			break;
		case 12:
			printf("\nO n�mero %i � equivalente ao m�s de: DEZEMBRO\n",i);
			break;
		default:
			printf("\nO n�mero %i n�o tem equival�ncia com nenhum m�s\n",i);
			break;
	}
	
	system("pause");
	return 0;
}
