/*3 � Solicite  que o usu�rio  digite  10 n�meros.  Caso o usu�rio  digite  um  valor  negativo,  o programa 
deve parar de pedir n�meros.  Para cada n�mero  n�o negativo  digitado,  o programa  deve informar  se 
o n�mero  � par ou �mpar.  No final  do programa,   informe  a quantidade  de n�meros  pares e �mpares 
digitados,  sem contar com o n�mero  negativo,  caso ele tenha  sido fornecido. 
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
		printf("\nDigite um n�mero:");
		scanf("%i",&num);
		if(num>=0){
			if (num%2==0){
				printf("\n%i � par\n",num);
				cp++;
			}else if(num%2!=0){
				printf("\n%i � impar\n",num);
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
