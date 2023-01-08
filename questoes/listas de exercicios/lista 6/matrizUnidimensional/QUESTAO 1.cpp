/*1) Pedir que o usuário digite 10 números inteiros, em seguida peça que ele forneça 
um  número  inteiro.  O  programa  deve  informar  se  esse  número  é  um  dos  10 
números digitados inicialmente pelo usuário ou não. */
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
		printf("\nDigite o %io. número:",i+1);
		scanf("%i",&vetor[i]);
	}system("cls");
	printf("\nDigite agora um número qualquer:");
	scanf("%i",&num);
	for(j=0;j<10;j++){
		if(vetor[j]==num){
			printf("\nO número %i foi digitado por você antes!",num);
			c=0;
			break;
		}
		else{
			c++;
		}
	}printf("\n");
	if(c!=0){
		printf("\nO número %i não foi digitado por você antes!\n",num);
	}
	
	getchar();
	//system("pause");
	return 0;
}
