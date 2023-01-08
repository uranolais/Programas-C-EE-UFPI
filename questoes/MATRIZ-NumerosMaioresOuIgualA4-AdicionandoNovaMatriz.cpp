/*2. Faça um programa que carregue uma matriz 4 x 3 
com números inteiros, calcule e mostre quantos elementos
dessa matriz são maiores que 4 e, em seguida, monte uma
segunda matriz com os elementos diferentes de 4. No lugar do 
número 4, da segunda matriz, deverá ser substituído pelo número 0.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int matriz[4][3],m2[4][3]={0},i,j,a,b,c,d,e,f,ctd=0;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("\nDigite o número que ocupa a matriz[%i][%i]:",i,j);
			scanf("%i",&matriz[i][j]);
			if(matriz[i][j]>4){
				ctd++;
				printf("\nO valor '%i' da posição 'matriz[%i][%i]' é maior que 4",matriz[i][j],i,j);
			}
		}
	}
	if(ctd!=0){
		printf("\nO total de números maiores que 4 é: %i\n",ctd);
	}else{
		printf("\nTodos os números digitados são menores ou igual a 4.\n");
	}
	
	for(a=0;a<4;a++){
		for(b=0;b<3;b++){
			if(matriz[a][b]!=4){
				m2[a][b]=matriz[a][b];
			}else{
				m2[a][b]=0;
			}
		}printf("\n %i",m2[a][b]);
	}
	
	system("pause");
	return 0;
}
