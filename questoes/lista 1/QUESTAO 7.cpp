/* 7.  Fa�a  um  algoritmo  que  leia  um  valor
em  real  e  a  cota��o  do  d�lar.  Em  seguida, 
imprima o valor correspondente em d�lares. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	float real,dolar,c;
	printf("\nDigite o pre�o do dolar em rela��o ao real: ");
	scanf("%f",&dolar);
	printf("\nDgite o valor em reais: ");
	scanf("%f",&real);
	c=real*dolar;
	printf("\nO valor de %.2f reais em dolar �: %.2f.\n",real,c);	
	
	getchar();
	//system("pause");
	return 0;
}
