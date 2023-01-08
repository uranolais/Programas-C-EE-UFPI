/*Faça um programa que leia quatro números e imprima a soma dos que forem par.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int num1, num2, num3, num4, soma;
	soma=0;

	printf("Digite quatro valores inteiros:\n");
	scanf("%i", &num1);
	scanf("%i", &num2);
	scanf("%i", &num3);
	scanf("%i", &num4);

//numeros distintos	
	
	if (num1%2==0) // num1 par
	{
		soma=soma+num1;
	}
	
	if (num2%2==0) // num2 par
	{
		soma=soma+num2;
	}
	if (num3%2==0) // num3 par
	{
		soma=soma+num3;
	}
	if (num4%2==0) // num4 par
	{
		soma=soma+num4;
	}

	
	printf("\nA soma dos numeros pares digitados foi de: %i\n", soma);
	
	
}

