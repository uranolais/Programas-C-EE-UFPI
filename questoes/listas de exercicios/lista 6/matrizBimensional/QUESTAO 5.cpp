/*5. Na teoria dos sistemas, define-se como elemento  minimax de uma  matriz o 
menor elemento da linha onde se encontra o maior elemento da matriz. Escreva 
um programa que leia uma matriz 10 X 10 de inteiros e encontre seu elemento 
minimax, mostrando também sua posição. Para esta questão, considere que todos 
os elementos da matriz são diferentes. Não é necessário validar a entrada de dados. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int matriz[10][10];
	int menor,maior=0,linha,i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("\nDigite o valor da posição[%i][%i]:",i,j);
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if((matriz[i][j])>maior){
				maior=matriz[i][j];
				linha=i;
			}
		}
	}
	for(i=0;i<10;i++){
		if((matriz[linha][i])<menor){
			menor=matriz[linha][i];
		}
	}
	printf("\nO maior é: %i \nEle está na linha: %i \nE o menor valor dessa linha é: %i\n",maior,linha,menor);
	getchar();
	//system("pause");
	return 0;
}
