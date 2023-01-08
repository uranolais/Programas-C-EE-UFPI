/*Faça um programa que escreva suas notas em
linhas diferentes com exatamente uma casa
decimal. Use a formatação %.1f para substituir
pelos valores e, a partir disso, explique como
esse marcador funciona.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(void)
{

	float nota1, nota2, nota3;

	printf("Digite sua primeira nota: ");
	scanf ("%f", &nota1);

	printf("Digite sua segunda nota: ");
	scanf ("%f", &nota2);

	printf("Digite sua terceira nota: ");
	scanf ("%f", &nota3);

	printf("As suas notas sao: \n %.1f \n %.1f \n %.1f", nota1, nota2, nota3);
	/*Este %.1f serve para imprimir apenas uma casa decimal. E o \n serve para dar uma quebra delinha.*/
	return 0;
}
