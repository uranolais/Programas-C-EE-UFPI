/*A import�ncia de R$780.000,00 ser� dividida entre
tr�s ganhadores de um concurso, sendo que:
� O primeiro ganhador receber� 46% do total.
� O segundo receber� 32% do total.
� O terceiro receber� o restante.
� Crie um algoritmo que calcule e imprima a quantia
recebida por cada um dos ganhadores.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	float prim, seg, terc;

	printf("A import�ncia de R$780.000,00 ser� dividida entre\ntr�s ganhadores de um concurso, sendo que:\n\nO primeiro ganhador receber� 46%% do total.\nO segundo receber� 32%% do total.\nO terceiro receber� o restante.\n");
	
	prim=780000*0.46;
	seg=780000*0.32;
	terc=780000-prim-seg;

	printf("\nO Primeiro ganhador receber�: R$%.2f.\nO Segundo ganhador receber�: R$%.2f.\nO Terceiro ganhador receber�: R$%.2f.\n", prim, seg, terc);

	return 0;
}
