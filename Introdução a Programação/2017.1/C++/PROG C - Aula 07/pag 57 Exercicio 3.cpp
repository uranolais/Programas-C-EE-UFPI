/*Faça um programa que leia dois números inteiros, o primeiro é o valor inicial
de um contador, e o segundo é o valor final do contador (o valor inicial fornecido
é inferior ao valor final). Usando o comando while, escreva na tela uma contagem
que comece do primeiro número lido, escreva os números seguintes colocando apenas
um número em cada nova linha da tela, até chegar ao valor final indicado.
Exemplo de tela de saída:
Entre com o número inicial da contagem: 5
Entre com o número fnal da contagem: 9 5 6 7 8 9 */
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>
int main(int argc, char** argv)
{
	int a, b;

	setlocale(LC_ALL, "portuguese");

	printf("\nEntre com o número inicial da contagem\n");
	scanf("%i", &a);
	printf("\nEntre com o número final da contagem\n");
	scanf("%i", &b);

	if (a > b)
	{
		while(a > b)
		{
			printf("\nO VALOR INICIAL DEVE SER MENOR QUE O FINAL\n");
			printf("\nEntre com o número inicial da contagem\n");
			scanf("%i", &a);
			printf("\nEntre com o número final da contagem\n");
			scanf("%i", &b);

			if(a < b)
			{
				printf("Contador Gerado:\n");
				while(b + 1 > a)
				{
					a++;
					printf("%d\n", a - 1);

				}
				return 0;
			}
		}
	}

	if (a < b)
	{
		printf("Contador Gerado:\n");
		while(b + 1 > a)
		{
			a++;
			printf("%d\n", a - 1);
		}

	}
	return 0;
}


