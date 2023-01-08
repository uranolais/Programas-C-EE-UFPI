/* 8. Faça um programa que calcule a quantidade de
dinheiro gasto por um fumante dados: a quantidade de
anos que ele fuma, o preço da carteira e o número de
cigarros por dia.
uma carteira 10 cigarros
1 ano 365 dias
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
	float cigarros,anos,canual,carteira,cpreco,preco,total;
	printf("\n*=*=*=*=* GASTO DE FUMANTE *=*=*=*=*\n");
	printf("\nDigite a quantidade de anos que fuma: ");
	scanf("%f",&anos);
	printf("\nDigite a quantidade de cigarros que fuma por dia: ");
	scanf("%f",&cigarros);
	printf("\nDigite o preço da carteira:");
	scanf("%f",&preco);
	system("cls");
	int i=0;
	do{
		carteira=(1*cigarros)/10;//quantidade de carteira;
		cpreco=carteira*preco;
		canual=cpreco*365;
		total=canual*anos;
		i=1;
	}while(i!=1);
	printf("\nO valor gasto com cigarros nesse periodo é:%.2f\n",total);
	getchar();
	//system("pause");
	return 0;
}
