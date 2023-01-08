/*Soma de valores de ponteiros tbm*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int x=10;
	double y=20.50;
	char z='a';
	int *pX=&x;
	//pX=&x; //não tem o * na frente caso seja desse jeito 
	double *pY=&y;
	char *pZ=&z;
	printf("\nEndereço x = %i - Valor de x = %i",pX,*pX);
	printf("\nEndereço y = %i - Valor de y = %f",pY,*pY);
	printf("\nEndereço z = %i - Valor de z = %c",pZ,*pZ);
	
   	double soma = *pX +*pY;
	printf("\nValor da soma: %f\n",soma);
	
	int *resultado;
	resultado=&x;
	printf("Valor x = %i\n",resultado);
	
	getchar();
	//system("pause");
	return 0;
}

