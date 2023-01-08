/*9. Leia dois vetores: R de 5 elementos e S de 10
elementos. Gerar um vetor X de 15 elementos
cujas 5 primeiras posições contenham os
elementos de R e as 10 últimas posições os
elementos de S. Escrever o vetor X.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int r[5],s[10],x[15],i,j,a,b,c=0,d;
	for(i=0;i<5;i++){
		printf("\nDigite o %io. número do vetor 'R': ",i+1);
		scanf("%i",&r[i]);
	}
	system("cls");
	for(j=0;j<10;j++){
		printf("\nDigite o %io. número do vetor 'S': ",j+1);
		scanf("%i",&s[j]);
	}
	system("cls");
	for(a=0;a<5;a++){
		x[a]=r[a];
	}
	for(b=5;b<15;b++){
		x[b]=s[c];
		c++;
	}printf("\n[");
	for(d=0;d<15;d++){
		printf(" %i ",x[d]);
	}printf("]\n");
	system("pause");
	return 0;
}
