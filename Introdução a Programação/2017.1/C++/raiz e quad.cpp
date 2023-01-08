// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <conio.h>
#include <math.h>

float numero, quadrado, raiz;

int main(int argc, char** argv)
{
	printf("Digite o numero: ");

	scanf("%f", &numero);

	quadrado = pow(numero, 2);

	raiz = sqrt(numero);

	printf("\n\nQuadrado do numero = %f", quadrado);

	printf("\n\nRaiz quadrada do numero = %f", raiz);

	getch();
	return 0;
}

