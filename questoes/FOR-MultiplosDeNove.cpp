/* Faça um programa que imprima os múltiplos de
9 menores que 300.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int m;
	for(m=9;m<300;m=m+9){
		printf("\n%i\n",m);
	}
	system("pause");
	return 0;
}
