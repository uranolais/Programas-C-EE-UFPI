/* 7.  Faça  um  algoritmo  que  leia  um  valor
em  real  e  a  cotação  do  dólar.  Em  seguida, 
imprima o valor correspondente em dólares. */
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
	printf("\nDigite o preço do dolar em relação ao real: ");
	scanf("%f",&dolar);
	printf("\nDgite o valor em reais: ");
	scanf("%f",&real);
	c=real*dolar;
	printf("\nO valor de %.2f reais em dolar é: %.2f.\n",real,c);	
	
	getchar();
	//system("pause");
	return 0;
}
