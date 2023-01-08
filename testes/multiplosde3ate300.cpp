/*Faça um programa que imprima os múltiplos de
9 menores que 300.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int mu;
	for(mu=0;mu<300;mu=mu+3){
		printf("%i \n",mu);
	}
	system("pause");
	return 0;
}
