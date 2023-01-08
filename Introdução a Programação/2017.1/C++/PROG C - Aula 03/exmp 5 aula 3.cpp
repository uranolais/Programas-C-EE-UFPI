#include <stdio.h>

int main(int argc, char** argv)
{
	char nome [255];
	
	printf("Escreva seu nome:\n");
	gets(nome);
    printf("\no Seu nome é: %s\n", nome);
	return 0;
}