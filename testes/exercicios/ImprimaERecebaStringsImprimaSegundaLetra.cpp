/* Escreva um programa que leia duas strings e as
coloque na tela. Imprima também a segunda letra de
cada string.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char sum[10];
	char sdois[20];
	printf("Digite duas Palavras em linhas diferentes: \n");
	gets(sum);
	gets(sdois);
	printf("A primeira palavra foi: %s \n",sum);
	printf("Sua segunda letra e': %c \n",sum[1]);
	printf("A segunda palavra foi: %s \n",sdois);
	printf("Sua segunda letra e': %c \n",sdois[1]);
	system("pause");
	return 0;
}
