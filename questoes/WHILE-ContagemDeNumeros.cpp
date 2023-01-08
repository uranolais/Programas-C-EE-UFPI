/*. Faça um programa que leia dois números inteiros, o primeiro
é o valor inicial de um contador, e o segundo é o valor final do
contador (o valor inicial fornecido é inferior ao valor final).
Usando o comando while, escreva na tela uma contagem que
comece do primeiro número lido, escreva os números seguintes
colocando apenas um número em cada nova linha da tela, até
chegar ao valor final indicado. Exemplo de tela de saída:
Entre com o número inicial da contagem: 5
Entre com o número fnal da contagem: 9 5 6 7 8 9*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,f;
	printf("\nEntre com o número incial da contagem: \n");
	scanf("%i",&i);
	printf("\nEntre com o número final da contagem: \n");
	scanf("%i",&f);
	while(i<=f){
		printf(" %i ",i);
		i+=1;
	}
	system("pause");
	return 0;
}
