/*Faça um programa que leia três valores e verifique se formam um triângulo.
Caso positivo, classifique esse triângulo como
triângulo equilátero (possui os três lados iguais),
triângulo isósceles (possui dois lados iguais) e
triângulo escaleno (possui três lados diferentes).*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a, b, c, ab, ba, ac, ca, bc, cb;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite tres valores inteiros:\n");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	ab=a+b;
	ba=a-b;
	bc=b+c;
	cb=b-c;
	ac=a+c;
	ca=a-c;
	
	if(ab>c && ba<c && bc>a && cb<a && ac>b && ca<b){
		if(a==b && a==c){
			printf("\n\nTRIÂNGULO EQUILÁTERO\n");
		}
		if(a==b || a==c || b==c){
			printf("\nTRIÂNGULO ISÓCELES\n");
		}
		if(a!=b && a!=c && b!=c){
			printf("\nTRIÂNGULO ESCALENO\n");
		}
	}
	
	else{
		printf("\nOs valores digitados não formam um triângulo.\n");
	}
	return 0;
}