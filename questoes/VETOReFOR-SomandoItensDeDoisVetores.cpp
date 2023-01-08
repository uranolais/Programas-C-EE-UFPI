/*7. Faça um programa que receba dois vetores de 5
elementos cada e retorne um vetor resultado
contendo a soma das posições correspondentes
dos vetores de entrada. Por exemplo:
• Vetor 1: [5, 8, 10, 3, 1]
• Vetor 2: [4, 2, 9, 7, 6]
• Vetor Resultado: [9, 10, 19, 10, 7].*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int v1[5],v2[5];
	int i,j,soma[5],s;
	for (i=0;i<5;i++){
		printf("\nDigite o %io. número do primeiro vetor: \n",i+1);
		scanf("%i",&v1[i]);
	}
	system("cls");
	for (j=0;j<5;j++){
		printf("\nDigite o %io. número do primeiro vetor: \n",j+1);
		scanf("%i",&v2[j]);
	}
	system("cls");
	for(s=0;s<5;s++){
		soma[s]=v1[s]+v2[s];
		
	}printf("\n[");
	for(int a=0;a<5;a++){
		printf(" %i ",soma[a]);
	}printf("]\n");
	system("pause");
	return 0;
}
