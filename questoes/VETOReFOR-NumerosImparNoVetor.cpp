/*3. Faça um programa que leia 10 valores em um
vetor. Depois de ler o vetor, o programa deve
percorrê-lo e imprimir apenas os valores percorrê lo 
e imprimir apenas os valores
ímpares que foram armazenados.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int vetor[10],i,j;
	for(i=0;i<10;i++){
		printf("\nDigite o %io. número: \n",i+1);
		scanf("%i",&vetor[i]);
	}
	for (j=0;j<10;j++){
		if(vetor[j]%2!=0){
			printf("\nO número %i é impar.\n",vetor[j]);
		}
	}
	system("pause");
	return 0;
}
