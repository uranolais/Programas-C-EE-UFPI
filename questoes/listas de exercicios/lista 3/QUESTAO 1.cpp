/*1. Fa�a um programa para mostrar os 100 primeiros termos da s�rie de Fibonacci. . A
s�rie de Fibonacci � formada pela seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc. Nesta
s�rie, o pr�ximo termo � obtido pela soma dos dois �ltimos termos da s�rie.*/
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
