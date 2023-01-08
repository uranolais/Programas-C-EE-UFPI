/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int somarVetor(int vetor[],const int n){
	int soma=0;
	int *ponteiro;
	int *const finalVetor=vetor+n;
	for(ponteiro=vetor;ponteiro<finalVetor;ponteiro++){
		soma += *ponteiro;
	}
	return soma;
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int somarVetor(int vetor[],const int n);
	int vetor[10]={5,5,5,5,5,5,5,5,-10,10};
	
	printf("A soma dos membros do vetor é: %i\n",somarVetor(vetor,10));
	
	getchar();
	//system("pause");
	return 0;
}