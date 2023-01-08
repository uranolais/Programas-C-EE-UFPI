/*Escreva um programa que leia duas strings e as
coloque na tela. Imprima também a segunda letra de
cada string.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	char anne [10];
	char strd [20];
	
	printf("Digite duas palavras: \n");
	gets(anne);
	gets(strd);
	printf("\nPrimeira String: %s\n", anne);
	printf("\nSegunda string: %s\n", strd);
	printf("\nSegunda letra da primeira palavra: %c\n", anne[1]);
    printf("\nSegunda letra da segunda palavra: %c\n", strd[1]);
	return 0;
}