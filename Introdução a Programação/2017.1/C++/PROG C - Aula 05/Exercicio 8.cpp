/*Faça um programa que leia um número e imprima se ele é par ou ímpar.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int num;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um valor inteiro:\n");
	scanf("%i", &num);
	
	if(num%2==0){
		printf("\nO número digitado é par.\n");
	}
	
	else{
		printf("\nO número digitado é ímpar.\n");
	}
	
	return 0;
}