/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int vetor[3]={1,2,3};
	int *ponteiro=vetor;
	
	//++ponteiro; //muda o local, vai pra 2
	
	//alterar o primeiro valor;
	*(ponteiro+1)=10;
	printf("%i",vetor[1]);
	
	
	
	
	/*//
	int *ponteiro=&vetor[0]
	int *ponteiro=vetor;
	printf("%p",ponteiro);
	printf("\n%i",ponteiro[1]);*/
	
	/*printf("%p\n",ponteiro);
	ponteiro=&vetor[1];
	printf("%p\n",ponteiro);
	ponteiro=&vetor[2];
	printf("%p\n",ponteiro);*/
	
	getchar();
	//system("pause");
	return 0;
}