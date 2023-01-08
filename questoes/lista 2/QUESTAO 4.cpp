/*4. Faça um algoritmo para verificar se determinado número inteiro lido é divisível por 3 
ou 5, mas não simultaneamente pelos dois. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	printf("\nDigite um número inteiro: ");
	scanf("%i",&num);
	if(num%3==0 && num%5!=0){
		printf("\nO número %i é divisível por 3!\n",num);
	}
	if(num%5==0 && num%3!=0){
		printf("\nO número %i é divisível por 5!\n",num);
	}
	getchar();
	//system("pause");
	return 0;
}
