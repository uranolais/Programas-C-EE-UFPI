/*3. Faça um programa que carregue uma matriz 3 x 3 
com três tipos de valores: múltiplos de 5, múltiplos de 7
ou múltiplos de 11. Devem ser lidos apenas valores 
válidos maiores que zero. Imprima os resultados.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int matriz[3][3],i,j,k,m;
	printf("\n\n********** MATRIZ 3X3 ***********\n\n");
	printf("\nDigite números múltiplos de 5,7 e 11.\n");
	//printf("");
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			do{	
				printf("Digite um número inteiro:");
					scanf("%i",&matriz[i][j]);
			}while(matriz[i][j]%5!=0 && matriz[i][j]%7!=0 && matriz[i][j]%11!=0 || matriz[i][j]<=0 && j<3);
		}
	}
	printf("\n[");
	for(k=0;k<3;k++){
		for (m=0;m<3;m++){
			printf(" %i ",matriz[k][m]);
		}
	}printf("] \n");
	system("pause");
	return 0;
}
