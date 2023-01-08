/*Faça um programa que receba uma temperatura em
Celcius e imprima a correspondente conversão para
Farenheit e Kelvin.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	float C, F1, K;

	printf("Digite a temperatura atual em graus Celsius:\n");
	scanf("%f", &C);

	F1 = (9 * C + 160) / 5;
	K = C + 273.15;

	if(C < -273.15){
		printf("\nEssa temperatura não existe\n");
	}
	
	else
	{
		printf("\nEssa temperatura na escala Fahrenheit eh: %fF\n", F1);
		printf("\nEssa temperatura na escala Kelvin eh: %fK\n", K);
	}
	return 0;
}