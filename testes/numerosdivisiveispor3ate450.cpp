/* Faça um programa que calcule e imprima os
números divisíveis por 3 entre 10 e 450.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	for (num=12;num<450;num+=3){
		printf("%i \n",num);
	}
	system("pause");
	return 0;
}
