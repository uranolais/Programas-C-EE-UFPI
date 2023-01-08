// SEUS PUTO esse programa ta todo bonitnho, entao nao copia igual Calouro burro da porra
// ESSE PROGRAMA CONVERTE VELOCIDADE DE KM/H PRA M/S
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int velkm;
	float velms;
	
	system("color 5F");


	printf ("\nDIGITE A VELOCIDADE EM KM/H: ");
	scanf ("%i", &velkm);

	velms = velkm / (3.6);

	printf ("\nA VELOCIDADE DIGITADA, CONVERTIDA, É %.2f m/s.\n", velms);


	return 0;
}
