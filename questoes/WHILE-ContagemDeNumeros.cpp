/*. Fa�a um programa que leia dois n�meros inteiros, o primeiro
� o valor inicial de um contador, e o segundo � o valor final do
contador (o valor inicial fornecido � inferior ao valor final).
Usando o comando while, escreva na tela uma contagem que
comece do primeiro n�mero lido, escreva os n�meros seguintes
colocando apenas um n�mero em cada nova linha da tela, at�
chegar ao valor final indicado. Exemplo de tela de sa�da:
Entre com o n�mero inicial da contagem: 5
Entre com o n�mero fnal da contagem: 9 5 6 7 8 9*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,f;
	printf("\nEntre com o n�mero incial da contagem: \n");
	scanf("%i",&i);
	printf("\nEntre com o n�mero final da contagem: \n");
	scanf("%i",&f);
	while(i<=f){
		printf(" %i ",i);
		i+=1;
	}
	system("pause");
	return 0;
}
