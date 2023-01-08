/*Escreva um programa onde o usuário diz quantos números quer digitar, em seguida
solicite a ele que digite todos os números e diga qual o maior número daqueles digitados.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include<stdio.h>
#include<stdlib.h>
#include <math.h>


int main()
{
	int maior, aux, i = 0, qtd, n = 1;

	system("color 5F"); //Comando para mudar a cor das coisas ignora kkk dps que aprendi boto em tudo

	printf("Digite quantos numeros voce quer digitar: ");
	scanf("%d", &qtd);

	do
	{
		n++; //para poder contar de n ate a qtd desejada
		printf("Digite um numero: ");
		scanf("%d", &aux); //escaneando os numeros que a pessoa ta digitando
		if(i == 0)
		{
			maior = aux; //define que a variavel maior sera o conteudo do que voce digitar
			i++;
		}
		else if(aux > maior)//se um outro auxilar for maior que o digittado
		{
			maior = aux; //o realmente maior sera esse auxiliar de cima
		}
	}

	while (n <= qtd); // n é 1 e vai ate ''qtd'' de numero que ele disse que quer digitar
	printf("\nMaior numero digitado: %d.\n", maior); // aqui vc imprime

	return 0;
}
