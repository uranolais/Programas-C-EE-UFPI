/*Faça um programa que escreva seu nome.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	char nome [255];
	
	printf("Digite seu nome: \n");
	gets(nome);
	printf("\nSEU NOME: %s\n", nome);

	return 0;
}