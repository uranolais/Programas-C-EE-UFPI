/*11. Sabendo que latão é composto por 70% de cobre e
30% de zinco, faça um programa que calcule a
quantidade de cobre e zinco para uma determinada
quantidade de latão informada pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	float cobre,zinco,latao;
	printf("\nDigite a quantidade de latão: ");
	scanf("%f",&latao);
	cobre=(70*latao)/100;
	zinco=(30*latao)/100;
	printf("\nPara uma quantidade de %.2f de latão, há %.2f de cobre e %2.f de zinco.\n",latao,cobre,zinco);
	
	getchar();
	//system("pause");
	return 0;
}
