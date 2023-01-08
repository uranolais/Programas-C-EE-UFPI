/*1. Faça um programa para mostrar os 100 primeiros termos da série de Fibonacci. . A
série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc. Nesta
série, o próximo termo é obtido pela soma dos dois últimos termos da série.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int a=0,b=1,fi;
	printf(" %i ",a);
	printf(" %i ",b);
	printf(" %i ",a+b);
	for(int i=3;i<=100;i++){
		fi=a+b;
		a=b;
		b=fi;
		printf(" %i ",a+b);
	}printf("\n");
		
	
	getchar();
	//system("pause");
	return 0;
}
