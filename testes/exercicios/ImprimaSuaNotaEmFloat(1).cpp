/*Faça um programa que escreva suas notas em
linhas diferentes exatamente linhas diferentes com exatamente uma casa
decimal. Use a formatação %.1f para substituir
pelos valores e, a partir disso, explique como
esse marcador funciona.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	printf("Digite sua primeira nota:");
	scanf("%f",&nota1);
	printf("Digite sua segunda nota:");
	scanf("%f",&nota2);
	printf("Digite sua terceira nota:");
	scanf("%f",&nota3);
	printf("Digite sua quarta nota:");
	scanf("%f",&nota4);
	printf("Nota 1: %.1f \nNota 2: %.1f \nNota 3: %.1f \nNota 4: %.1f \n",nota1,nota2,nota3,nota4);
	
	system("pause");
	return 0;
}
