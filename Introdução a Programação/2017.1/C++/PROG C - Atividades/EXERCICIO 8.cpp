/*Fa�a um programa que calcule a quantidade de
dinheiro gasto por um fumante dados: a quantidade de
anos que ele fuma, o pre�o da carteira e o n�mero de
cigarros por dia.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	float anos, valor, qtd, money;

	printf("Digite a quantos anos � fumante: ");
	scanf("%f", &anos);
	printf("\nDigite o valor da carteira de cigarros: ");           //20 cigarros = 1 carteira
	scanf("%f", &valor);
	printf("\nDigite quantos cigarros por dia s�o fumados: ");
	scanf("%f", &qtd);

	money=(qtd*valor*365*anos)/20;
	
	printf("\nO fumante j� gastou cerca de R$%.2f com cigarros at� hoje..\n", money);

	return 0;
}

 
