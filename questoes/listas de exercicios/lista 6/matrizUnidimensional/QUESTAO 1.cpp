/*1) Pedir que o usu�rio digite 10 n�meros inteiros, em seguida pe�a que ele forne�a 
um  n�mero  inteiro.  O  programa  deve  informar  se  esse  n�mero  �  um  dos  10 
n�meros digitados inicialmente pelo usu�rio ou n�o. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int vetor[10],num,i,j,c=0;
	for(i=0;i<10;i++){
		printf("\nDigite o %io. n�mero:",i+1);
		scanf("%i",&vetor[i]);
	}system("cls");
	printf("\nDigite agora um n�mero qualquer:");
	scanf("%i",&num);
	for(j=0;j<10;j++){
		if(vetor[j]==num){
			printf("\nO n�mero %i foi digitado por voc� antes!",num);
			c=0;
			break;
		}
		else{
			c++;
		}
	}printf("\n");
	if(c!=0){
		printf("\nO n�mero %i n�o foi digitado por voc� antes!\n",num);
	}
	
	getchar();
	//system("pause");
	return 0;
}
