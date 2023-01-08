/* Faça um programa que leia um vetor de 10
valores e imprima o menor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int vetor[10],i,a,b,j=0;
	for(i=0;i<10;i++){
		printf("\nDigite o %i. valor(de 10): \n",i+1);
		scanf("%i",&vetor[i]);
	}
	for(a=0;a<i;a++){
		for(b=a+1;b<i;b++){
			if (vetor[a]<vetor[b]){//trocando os valores;
				j=vetor[a];
				vetor[a]=vetor[b];
				vetor[b]=j;
			}
		}
	}
	printf("\nO menor valor é: %i\n",j);
	system("pause");
	return 0;
}
