/*Faça um programa que receba três valores e imprima a soma dos dois maiores.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	int a, b, c, soma;
	
	printf("Digite tres valores inteiros:\n");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if(a<b && a<c){
		soma = b+c;
	}
	if(b<a && b<c){
		soma = a+c;
	}
	if(c<a && c<b){
		soma = a+b;
	}
	
	printf("A soma dos dois maiores numeros digitados é: %i", soma);
	
	return 0;
}