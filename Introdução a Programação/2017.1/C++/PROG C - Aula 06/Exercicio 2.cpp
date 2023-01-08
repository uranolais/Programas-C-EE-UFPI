/*Faça um programa que receba o valor inteiro e retorne o mês do ano equivalente
(1=janeiro, 2=fevereiro, 3=março, ...... ,12 = dezembro).Se o valor recebido for
maior que 12 ou menor que 1 deverá imprimir “mês inválido”.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int mes;

	setlocale(LC_ALL, "portuguese");

	printf("Digite o mês atual correspondente:\n");
	scanf("%i", &mes);

	if(mes >= 1 && mes <= 12)
	{
		if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		{
			printf("\nEste mês tem 31 dias.\n");
		}

		if(mes == 2)
		{
			printf("\nEste mês tem 28 dias.\n");
		}

		if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
		{
			printf("\nEste mês tem 30 dias.\n");
		}
	}

	else
	{
		printf("\nMÊS INVÁLIDO\n");
	}

}
