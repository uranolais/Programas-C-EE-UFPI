/*Fa�a um programa que leia um n�mero e informe se
ele � igual ao seu dia de nascimento. Imprimir
�N�MERO CORRETO� se for igual e imprimir
�N�MERO INCORRETO�, caso contr�rio.*/
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
