/*4.Fa�a um algoritmo que leia quatro valores 
(um por vez). Em seguida, calcule e exiba 
a m�dia aritm�tica desses valores.*/
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
		printf("\nDigite o %o. n�mero:",i+1);
		scanf("%i",&num[i]);
		soma+=num[i];
		if(i==3){
			system("cls");
			media=(float)soma/4;
			printf("\nA m�dia aritm�tica desses valores �: %.2f",media);
		}
	}
	
	getchar();
	//system("pause");
	return 0;
}
