// SEUS PUTO esse programa ta todo bonitnho, entao nao copia igual Calouro burro da porra

// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
	int a, b, ad, sub, mult, div;
	char escolha;

	setlocale(LC_ALL, "portuguese");

	system("color 5F");
	
	printf("\nDentre as 4 operações aritméticas a seguir, escolha:\na-ADIÇÃO\ns-SUBTRAÇÃO\nm-MULTIPLICAÇÃO\nd-DIVISÃO\n\n");
	scanf("%c", &escolha);

	printf("\nDigite um valor numérico inteiro: ");
	scanf("%i", &a);
	printf("\nDigite outro valor numérico inteiro: ");
	scanf("%i", &b);

	
	
	switch(escolha)
	{
	case 'a':
		ad = a + b;
		printf("\nA adição dos números digitados é: %i\n", ad);
		break;

	case 's':
		sub = a - b;
		printf("\nA subtração dos números digitados é: %i\n", sub);
		break;

	case 'm':
		mult = a * b;
		printf("\nO produto dos números digitados é: %i\n", mult);
		break;

	case 'd':
		div = a / b;
		printf("\nO valor inteiro do quociente entre os valores digitados é: %i\n", div);
		break;

	default:
		printf("\nESCOLHA INVÁLIDA\n");
	}

	return 0;
}
