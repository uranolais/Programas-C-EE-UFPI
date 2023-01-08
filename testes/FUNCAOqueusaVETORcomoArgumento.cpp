/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int vetor[10]={6,4,1,9,8,0,5,7,3,2};
	int i;
	void ordemCrescente(int vetor[],int n);//ou int vetor[10]
	ordemCrescente(vetor,10);//numeros que tem no vetor
	for(i=0;i<10;i++){
		printf("\n%i",vetor[i]);
	}
	system("pause");
	return 0;
}
void ordemCrescente(int vetor[],int n){
	int i,j,temporaria;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(vetor[i]>vetor[j]){//fazendo a inversão de valores
				temporaria=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=temporaria;
			}
		}
	}
}
