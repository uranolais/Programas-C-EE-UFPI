/*Faça um programa que leia um número e informe se
ele é igual ao seu dia de nascimento. Imprimir
“NÚMERO CORRETO” se for igual e imprimir
“NÚMERO INCORRETO”, caso contrário.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 9499;
	int o;
	printf("Digite uma data de nascimento qualquer \n Nao use (/):");
	scanf("%i",&o);
	if (n==o){
		printf("NUMERO CORRETO \n");
	}else{
		printf("NUMERO INCORRETO \n");
	}
	system("pause");
	return 0;
}
