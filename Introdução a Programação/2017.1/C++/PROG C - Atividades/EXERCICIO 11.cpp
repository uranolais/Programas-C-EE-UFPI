/*Sabendo que lat�o � composto por 70% de cobre e
30% de zinco, fa�a um programa que calcule a
quantidade de cobre e zinco para uma determinada
quantidade de lat�o informada pelo usu�rio.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	float lat, zi, cu;

	printf("Digite a quantidade em mg de lat�o a ser estudada: ");
	scanf("%f", &lat);

	zi = lat * 0.3;
	cu = lat * 0.7;

	printf("\nA quantidade existente de Zinco � de %f mg.\n", zi);
	printf("\nA quantidade existente de Cobre � de %f mg.\n", cu);

	return 0;
}
