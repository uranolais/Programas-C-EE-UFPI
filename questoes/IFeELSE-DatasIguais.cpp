/*Faça um programa que leia um número e informe se
ele é igual ao seu dia de nascimento. Imprimir
“NÚMERO CORRETO” se for igual e imprimir
“NÚMERO INCORRETO”, caso contrário.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int data1,data2;
	printf("\nNao comece a data com '0'-zero\n");
	printf("\nInforme sua data de nascimento (nao use /):\n");
	scanf("%i",&data1);
	printf("\nInforme uma data de nascimento qualquer (nao use /):\n");
	scanf("%i",&data2);
	//data1=9499;
	if(data1==data2){
		printf("\nNUMERO CORRETO\n");
	}else{
		printf("\nNUMERO INCORRETO\n");
	}
	system("pause");
	return 0;
}
