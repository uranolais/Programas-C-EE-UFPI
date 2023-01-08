// Autor(a)    : Jardeanne da Silva Ferreira
//Questão 1

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int tempo;
	float distancia, velocidadem;
	
	setlocale(LC_ALL, "portuguese");
	
	system("color 5F");
	
	printf("Digite a distância (em KM) entre as duas cidades: ");
	scanf("%f",&distancia);
	printf("\nDigite o tempo (em horas) que leva para percorrer entre as duas cidades: ");
	scanf("%i",&tempo);
	
	velocidadem = distancia/tempo;
	
	printf("\nA velocidade média que leva da cidade de origem ao destio é de: %.1f km/h.\n", velocidadem);
	
	return 0;
}