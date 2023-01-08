/*4. Faça um programa que preencha 2 vetores, com 5
elementos cada. Como resultado, o programa deve
apresentar um vetor com os elementos dos dois
vetores intercalados. Vejamos um exemplo a
seguir:
• Vetor 1: [5, 8, 10, 3, 1]
• Vetor 2: [4, 2, 9, 7, 6]
• Vetor Resultado: [5, 4, 8, 2, 10, 9, 3, 7, 1, 6].*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int v1[5],v2[5],v[10];
	int a,b,c,d,e,i=0,j=0,k=0,l=0;
	for(a=0;a<5;a++){
		printf("\nDigite o %io. número do primeiro vetor:",a+1);
		scanf("%i",&v1[a]);
	}
	system("cls");
	for(b=0;b<5;b++){
		printf("\nDigite o %io. número do segundo vetor:",b+1);
		scanf("%i",&v2[b]);
	}
	system("cls");
	for(c=0;c<10;c=c+2){
		j++;
		for (i=0;i<j;i++){
			v[c]=v1[i];
		}
			
	}
	for(e=1;e<10;e=e+2){
		k++;
		for(l=0;l<k;l++){
			v[e]=v2[l];
		}
	}printf("\n[ ");
	for(d=0;d<10;d++){
		printf("%i ",v[d]);
	}printf("]\n");
	system("pause");
	return 0;
}
