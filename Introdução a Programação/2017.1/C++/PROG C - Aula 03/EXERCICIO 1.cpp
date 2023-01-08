/*Escreva um programa que leia um caracter digitado
pelo usuário, imprima o caracter digitado e o código
ASCII correspondente a este caracter.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <conio.h>

int main(int argc, char** argv)
{
	char Ch;
	printf("Digite um caracter:\n");
	Ch=getch(); //repete a letra que voce digitou
	printf("\nVoce pressionou a tecla %c\n", Ch);
	printf("\nCodigo ASCII correspondente %d\n", Ch);
	return (0);
}