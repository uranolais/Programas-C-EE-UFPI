/*1. Faça um programa que leia os elementos de uma matriz de inteiros 
com 3 linhas e 3 colunas e imprima os elementos da diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int matriz[3][3],i,j;
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nDigite o valor que ocupa a posição [%i][%i]:",i,j);
			scanf("%i",&matriz[i][j]);
		}system("cls");
	}printf("\n");
	system("cls");
	int k;
	printf("\nAS POSIÇÕES DA DIAGONAL PRINCIPAL SÃO:\n");
	for(k=0;k<3;k++){
		printf(" %i ",matriz[k][k]);
	}printf("\n");
	//OUTRO JEITO DE FAZER:
	/*int w;
	for(k=0;k<3;k++){
		for(w=0;w<3;w++){
			if(k==w){
				printf(" %i ",matriz[k][w]);
			}
		}
	}printf("\n");*/
	system("pause");
	return 0;
}
