// Autor(a)    : Jardeanne da Silva Ferreira
//Questão 2

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int anos, cig, valor;
	
	setlocale(LC_ALL, "portuguese");
	
	system("color 5F");
	
	printf("Digite a quantos anos é fumante: ");
	scanf("%i",&anos);
	printf("\nDigite a quantidade de cigarros por dia: ");
	scanf("%i",&cig);
	
	valor = anos*365*cig*0.1;
	
	printf("\nO dinheiro gasto pelo fumante é de: R$%i,00.\n", valor);
	
	return 0;
}