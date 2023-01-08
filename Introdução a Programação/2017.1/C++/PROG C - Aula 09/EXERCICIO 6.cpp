/*Escreva um programa que imprima os números de 100 a 600 que são múltiplos de 5.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main()
{
	int n = 99;
	
	system("color 5F"); //Comando para mudar a cor de fundo e da fonte

	setlocale(LC_ALL, "portuguese");

	do
	{
		n++;
		
		if(n%5==0){
		printf("\n%d", n);	
		}
	}

	while (n <= 600);
	return 0;
}
