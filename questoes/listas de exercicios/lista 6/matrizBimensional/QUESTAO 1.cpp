/* 1. Faça um programa que leia uma matriz 5 X 5, calcule e escreva a soma dos 
elementos que estão na área marcada com '*'. (pdf)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
//#define TAM 120
/*void limparBuffer ()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}*/
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int matriz[5][5];
	int i,j,sa=0,sb=0,sc=0,sd=0,a=0,b=5;
	int c,d,e,f,g,h;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("\nDigite o valor da posicao linha: %i, coluna: %i >>",i,j);
			scanf("%i",&matriz[i][j]);	
		}
	}
	
	for(g=0;g<5;g++){
		for(h=0;h<5;h++){
			if(g==h){
				sa+=matriz[g][h];
			}else if((g+h)==4){
				sb+=matriz[g][h];
			}
		}
	}
	for(c=0;c<5;c++){
		for(d=a;d<5;d++){
			sc+=matriz[c][d];
		}
		a++;
	}
	for (e=0;e<5;e++){
		for(f=b;f>0;f--){
			sd+=matriz[e][f];
		}
		b--;
	}
	
	printf("\nA soma de (a) é: %i",sa);
	printf("\nA soma de (b) é: %i",sb);
	printf("\nA soma de (c) é: %i",sc);
	printf("\nA soma de (d) é: %i",sd);
	getchar();
	//system("pause");
	return 0;
}
