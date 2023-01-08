/*Faça um programa em C que receba três números, calcule e mostre:

a) O valor do 1º número elevado ao 2º número;

B) O valor da raiz quadrada do 2º número;

c) O resto da divisão do 1º pelo 3º número;

d) O quociente da divisão do 3º pelo 2º número.*/
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
