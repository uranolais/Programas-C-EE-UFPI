/*Faça um programa que calcule a área e o volume do cilindro.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	float h, r,at, al, vol;

	printf("Digite o raio do cilindro: ");
	scanf("%f", &r);
	printf("Digite a altura do cilindro ");
	scanf("%f", &h);


	al=3.14*2*r*h;
	at=al+(2*3.14*r*r);
	vol=(3.14*r*r)*h;
	
	printf("\nA área lateral do cilindro é %f.\n", al);
	printf("\nA área total do cilindro é %f.\n", at);
	printf("\nO volume do cilindro é %f.\n", vol);

	return 0;
}
