/*Faça um programa que escreva seu nome e sobrenomes, cada um em uma linha.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	char nome [255], sobrenome [255];
	
	printf("Digite seu nome: \n");
	gets(nome);
	printf("Digite seu sobrenome: \n");
	gets(sobrenome);
	printf("\n%s\n%s\n", nome, sobrenome);
	
	

	return 0;
}