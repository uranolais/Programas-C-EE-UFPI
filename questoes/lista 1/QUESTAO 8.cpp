/*8.  Fa�a  um  algoritmo  que  leia  um  valor  que  represente  uma  temperatura  em  graus 
Celsius e apresente-a convertida em graus Fahrenheit. A f�rmula de convers�o �:
F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em 
Celsius. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	float c,f;
	printf("\nDigite uma temparatura em �C:");
	scanf("%f",&c);
	f=c*(9.0/5.0)+32.0;
	printf("\nA temparatura %.2f�C equivale a %.2f�F.\n",c,f);
	
	getchar();
	//system("pause");
	return 0;
}
