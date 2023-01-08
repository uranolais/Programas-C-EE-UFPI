/*A importância de R$780.000,00 será dividida entre
três ganhadores de um concurso, sendo que:
• O primeiro ganhador receberá 46% do total.
• O segundo receberá 32% do total.
• O terceiro receberá o restante.
• Crie um algoritmo que calcule e imprima a quantia
recebida por cada um dos ganhadores.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	float prim, seg, terc;

	printf("A importância de R$780.000,00 será dividida entre\ntrês ganhadores de um concurso, sendo que:\n\nO primeiro ganhador receberá 46%% do total.\nO segundo receberá 32%% do total.\nO terceiro receberá o restante.\n");
	
	prim=780000*0.46;
	seg=780000*0.32;
	terc=780000-prim-seg;

	printf("\nO Primeiro ganhador receberá: R$%.2f.\nO Segundo ganhador receberá: R$%.2f.\nO Terceiro ganhador receberá: R$%.2f.\n", prim, seg, terc);

	return 0;
}
