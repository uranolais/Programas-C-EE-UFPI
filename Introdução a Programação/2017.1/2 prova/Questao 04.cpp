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
	
	printf("\nDentre as 4 opera��es aritm�ticas a seguir, escolha:\na-ADI��O\ns-SUBTRA��O\nm-MULTIPLICA��O\nd-DIVIS�O\n\n");
	scanf("%c", &escolha);

	printf("\nDigite um valor num�rico inteiro: ");
	scanf("%i", &a);
	printf("\nDigite outro valor num�rico inteiro: ");
	scanf("%i", &b);

	
	
	switch(escolha)
	{
	case 'a':
		ad = a + b;
		printf("\nA adi��o dos n�meros digitados �: %i\n", ad);
		break;

	case 's':
		sub = a - b;
		printf("\nA subtra��o dos n�meros digitados �: %i\n", sub);
		break;

	case 'm':
		mult = a * b;
		printf("\nO produto dos n�meros digitados �: %i\n", mult);
		break;

	case 'd':
		div = a / b;
		printf("\nO valor inteiro do quociente entre os valores digitados �: %i\n", div);
		break;

	default:
		printf("\nESCOLHA INV�LIDA\n");
	}

	return 0;
}
