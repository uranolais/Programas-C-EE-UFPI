/*11. Sabendo que lat�o � composto por 70% de cobre e
30% de zinco, fa�a um programa que calcule a
quantidade de cobre e zinco para uma determinada
quantidade de lat�o informada pelo usu�rio.*/
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
	printf("\nDigite a quantidade de lat�o: ");
	scanf("%f",&latao);
	cobre=(70*latao)/100;
	zinco=(30*latao)/100;
	printf("\nPara uma quantidade de %.2f de lat�o, h� %.2f de cobre e %2.f de zinco.\n",latao,cobre,zinco);
	
	getchar();
	//system("pause");
	return 0;
}
