/* 2.Faça um programa que receba o
valor inteiro e retorne o mês do ano equivalente
(1 = janeiro, 2 = fevereiro, 3 = março, ..., 12 =
dezembro). Se o valor recebido for maior que 12
ou menor que 1 deverá imprimir “mês inválido”.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i;
	printf("\nDigite o número para verificarmos que mês ele representa:\n");
	scanf("%i",&i);
	switch(i){
		case 1:
			printf("\nO número %i é equivalente ao mês de: JANEIRO\n",i);
			break;
		case 2:
			printf("\nO número %i é equivalente ao mês de: FEVEREIRO\n",i);
			break;
		case 3:
			printf("\nO número %i é equivalente ao mês de: MARÇO\n",i);
			break;
		case 4:
			printf("\nO número %i é equivalente ao mês de: ABRIL\n",i);
			break;
		case 5:
			printf("\nO número %i é equivalente ao mês de: MAIO\n",i);
			break;
		case 6:
			printf("\nO número %i é equivalente ao mês de: JUNHO\n",i);
			break;
		case 7:
			printf("\nO número %i é equivalente ao mês de: JULHO\n",i);
			break;
		case 8:
			printf("\nO número %i é equivalente ao mês de: AGOSTO\n",i);
			break;
		case 9:
			printf("\nO número %i é equivalente ao mês de: SETEMBRO\n",i);
			break;
		case 10:
			printf("\nO número %i é equivalente ao mês de: OUTUBRO\n",i);
			break;
		case 11:
			printf("\nO número %i é equivalente ao mês de: NOVEMBRO\n",i);
			break;
		case 12:
			printf("\nO número %i é equivalente ao mês de: DEZEMBRO\n",i);
			break;
		default:
			printf("\nO número %i não tem equivalência com nenhum mês\n",i);
			break;
	}
	
	system("pause");
	return 0;
}
