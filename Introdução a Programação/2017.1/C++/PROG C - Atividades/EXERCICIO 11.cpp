/*Sabendo que latão é composto por 70% de cobre e
30% de zinco, faça um programa que calcule a
quantidade de cobre e zinco para uma determinada
quantidade de latão informada pelo usuário.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	float lat, zi, cu;

	printf("Digite a quantidade em mg de latão a ser estudada: ");
	scanf("%f", &lat);

	zi = lat * 0.3;
	cu = lat * 0.7;

	printf("\nA quantidade existente de Zinco é de %f mg.\n", zi);
	printf("\nA quantidade existente de Cobre é de %f mg.\n", cu);

	return 0;
}
