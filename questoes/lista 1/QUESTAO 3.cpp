/*3.Fa�a um algoritmo que leia tr�s
n�meros (um por vez) e mostre sua soma. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num[3],a,soma=0;
	for(a=0;a<3;a++){
		printf("\nDigite o %io. n�mero:",a+1);
		scanf("%i",&num[a]);
		soma+=num[a];
		if (a==2){
			printf("\nO resultado de %i+%i+%i � %i.\n",num[0],num[1],num[2],soma);
		}
	}	
	
	getchar();
	//system("pause");
	return 0;
}
