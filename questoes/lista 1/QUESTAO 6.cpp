/*6.  Faça  um  algoritmo  que  leia  uma  velocidade
em  km/h  (quilômetros  por  hora)  e 
apresente-a convertida em m/s (metros por segundo).
A fórmula de conversão é M = Km/3.6, sendo Km
a velocidade em km/h e M em m/s. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	float km,m;
	printf("\nDigite uma velocidade em km/h:");
	scanf("%f",&km);
	m=km/3.6;
	printf("\n%.2f km/h equivalea %.2f m/s.\n",km,m);
	getchar();
	//system("pause");
	return 0;
}
