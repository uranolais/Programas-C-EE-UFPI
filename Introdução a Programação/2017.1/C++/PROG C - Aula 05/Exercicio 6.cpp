/*Fa�a um programa que leia tr�s valores e verifique se formam um tri�ngulo.
Caso positivo, classifique esse tri�ngulo como
tri�ngulo equil�tero (possui os tr�s lados iguais),
tri�ngulo is�sceles (possui dois lados iguais) e
tri�ngulo escaleno (possui tr�s lados diferentes).*/
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
			printf("\n\nTRI�NGULO EQUIL�TERO\n");
		}
		if(a==b || a==c || b==c){
			printf("\nTRI�NGULO IS�CELES\n");
		}
		if(a!=b && a!=c && b!=c){
			printf("\nTRI�NGULO ESCALENO\n");
		}
	}
	
	else{
		printf("\nOs valores digitados n�o formam um tri�ngulo.\n");
	}
	return 0;
}