/*Faça um programa que receba o nome e o sobrenome
de uma pessoa e imprima o nome completo em uma
linha.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	char nome [255], sobrenome [255];

	printf("Digite seu nome: \n");
	gets(nome);
	printf("Digite seu sobrenome: \n");
	gets(sobrenome);
	printf("\n%s %s\n", nome, sobrenome);

	return 0;
}
