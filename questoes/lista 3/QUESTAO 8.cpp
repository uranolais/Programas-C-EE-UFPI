/*8.  Fa�a um programa que leia 10 inteiros e imprima sua m�dia. Use 
para ou enquanto.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n, v[10];
	float media,soma=0.0;
	for(n=0;n<10;n++){
		printf("\nDigite um valor: ");
		scanf("%i",&v[n]);
		soma+=v[n];
	}
	media=(float)soma/10;
	printf("\nA m�dia �: %.2f\n",media);
	
	
	getchar();
	//system("pause");
	return 0;
}
