/*3 – Solicite  que o usuário  digite  10 números.  Caso o usuário  digite  um  valor  negativo,  o programa 
deve parar de pedir números.  Para cada número  não negativo  digitado,  o programa  deve informar  se 
o número  é par ou ímpar.  No final  do programa,   informe  a quantidade  de números  pares e ímpares 
digitados,  sem contar com o número  negativo,  caso ele tenha  sido fornecido. 
Ex.: 
5 
IMPAR 
1 
IMPAR 
2 
PAR 
-4 
IMPARES: 2, PARES: 1 
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,ci=0,cp=0,num;
	for (i=0;i<10;i++){
		printf("\nDigite um número:");
		scanf("%i",&num);
		if(num>=0){
			if (num%2==0){
				printf("\n%i é par\n",num);
				cp++;
			}else if(num%2!=0){
				printf("\n%i é impar\n",num);
				ci++;
			}
		}else if(num<0){
			//continue;
			i=10;
		}
		num=0;
	}printf("\nImpares: %i\nPares: %i",ci,cp);
	printf("\n");
	
	getchar();
	//system("pause");
	return 0;
}
