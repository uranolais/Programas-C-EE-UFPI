/* SEUS PUTO esse programa ta todo bonitnho, entao nao copia igual Calouro burro da porra

   ESSE PROGRAMA AQUI FOI UMA FUMADA, QUE NA HORA DA PROVA NEM O PROF SABIA 
EXPLICAR QUE PORRA DE QUESTAO ERA ESSA... EU FIZ AI OQ EU ENTENDI QUE A QUESTAO PEDIA 
#PAS */

// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int vot, i = 0, soma = 0, nul, brc;
	float pctn, pctb;

	system("color 5F");

	setlocale(LC_ALL, "Portuguese");

	do
	{
		i++;
		printf("\n\nDigite a quantidade de votos do candidato %i: ", i);
		scanf("%d", &vot);
		printf("O total de votos no candidato %i foram: %i.", i, vot);
		
		soma = soma + vot;
	}
	while (i <= 2);

	printf("\n\nDigite a quantidade de votos nulos: ");
	scanf("%i", &nul);
	printf("\nDigite a quantidade de votos em branco: ");
	scanf("%i", &brc);
	
	soma = soma + brc + nul;
	
	pctn = (100*nul)/soma;
	pctb = (100*brc)/soma;
	
	
	printf("\n\n*******************************************************");
	printf("\n\nO total de votos é de: %i ", soma);
	printf("\n\nO total de votos nulos é de: %i ", nul);
	printf("\n\nO total de votos em branco é de: %i ", brc);
	printf("\n\nO percentual de votos nulos sobre o total de votos é de: %.2f%% ", pctn);
	printf("\n\nO percentual de votos em branco sobre o total de votos é de: %.2f%% \n", pctb);

	return 0;
}








