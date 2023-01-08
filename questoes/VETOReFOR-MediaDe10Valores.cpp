/*Faça um programa que leia 10 valores reais em
um vetor e, logo após, calcule a média desses
valores e a imprima para o usuário.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	float soma=0, media,valores[10];
	int i;
	for (i=0;i<10;i++){
		printf("\nDigite o %io. valor real(de 10):\n",i+1);
		scanf("%f",&valores[i]);
		soma+=valores[i];
	}
	system("cls");
	media=soma/10;
	printf("\nA média desses valores digitados é: %.2f \n",media);
	system("pause");
	return 0;
}
