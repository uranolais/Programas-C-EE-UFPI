/*Fa�a um programa em C que receba tr�s n�meros, calcule e mostre:

a) O valor do 1� n�mero elevado ao 2� n�mero;

B) O valor da raiz quadrada do 2� n�mero;

c) O resto da divis�o do 1� pelo 3� n�mero;

d) O quociente da divis�o do 3� pelo 2� n�mero.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
{
	int a,b,resto;
	int c,potencia;
	int raiz,quociente;
	printf("\nDigite 3 numeros :\n");
	scanf("%i %i %i",&a,&b,&c);
	printf("\nO valor de %i elevado a %i e': %i \n",a,b,pow(a,b));
	printf("\nO valor da raiz quadrada de %i e'aproximadamente: %i\n",b,sqrt(b));
	resto = a%b;
	printf("\nO valor do resto da divisao de %i por %i e': %i\n",a,c,resto);
	quociente=c/a;
	printf("\nO quociente de %i por %i e': %i \n");
	system("pause");
	return 0;
}
