/*Fa�a um programa que leia um n�mero e imprima se ele � par ou �mpar.*/
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
		printf("\nO n�mero digitado � par.\n");
	}
	
	else{
		printf("\nO n�mero digitado � �mpar.\n");
	}
	
	return 0;
}