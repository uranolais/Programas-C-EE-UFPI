/*3. Fa�a um programa que leia 10 valores em um
vetor. Depois de ler o vetor, o programa deve
percorr�-lo e imprimir apenas os valores percorr� lo 
e imprimir apenas os valores
�mpares que foram armazenados.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int vetor[10],i,j;
	for(i=0;i<10;i++){
		printf("\nDigite o %io. n�mero: \n",i+1);
		scanf("%i",&vetor[i]);
	}
	for (j=0;j<10;j++){
		if(vetor[j]%2!=0){
			printf("\nO n�mero %i � impar.\n",vetor[j]);
		}
	}
	system("pause");
	return 0;
}
