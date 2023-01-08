/*4.Faça um algoritmo que leia quatro valores 
(um por vez). Em seguida, calcule e exiba 
a média aritmética desses valores.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,num[4],soma=0;
	float media=0;
	for(i=0;i<4;i++){
		printf("\nDigite o %o. número:",i+1);
		scanf("%i",&num[i]);
		soma+=num[i];
		if(i==3){
			system("cls");
			media=(float)soma/4;
			printf("\nA média aritmética desses valores é: %.2f",media);
		}
	}
	
	getchar();
	//system("pause");
	return 0;
}
