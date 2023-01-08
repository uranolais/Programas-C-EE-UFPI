/*2. Crie um programa que ler 10 números inteiros e imprima o produto dos números
ímpares digitados e a soma dos pares.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num,soma=0,prod=1;
	for(int i=0;i<10;i++){
		printf("\nDigite um número inteiro:");
		scanf("%i",&num);
		if (num%2==0){
			soma+=num;
		}else if(num%2!=0){
			prod=prod*num;
		}
		num=0;
	}
	printf("\nSoma dos pares: %i\n",soma);
	printf("\nProduto dos impares: %i \n",prod);
	getchar();
	//system("pause");
	return 0;
}
