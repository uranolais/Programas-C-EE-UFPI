/*Faça um programa que calcule o resultado da expressão: (537 – 285)x10 + (3 x(72 - 17)).*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int result;
	
	setlocale(LC_ALL, "portuguese");
	
	result=((537-285)*10) + ((72-17)*3);
	printf("O resultado da expressão (537 – 285)x10 + (3x(72 - 17)) é: %i", result);
	return 0;
}