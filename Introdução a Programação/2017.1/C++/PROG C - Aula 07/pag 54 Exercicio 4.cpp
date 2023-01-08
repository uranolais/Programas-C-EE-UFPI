/*Faça um programa que calcule e imprima os números divisíveis por 3 entre 10 e 450.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int a;

	for(a=12;a<=450; a+=3){
		printf("%d\n", a);
	}
	return 0;
}
