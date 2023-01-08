/* 2. Faça um programa que receba um mês do ano
(em formato numérico) e imprima a quantidade de
dias que ele possui (considere fevereiro contendo 28
dias).*/
//MES COM 31: JAN,MAR,MAI,JUL,AGO,OUT,DEZ
//MES COM 28: FEV
//MES COM 30: ABR,JUN,SET,NOV
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	printf("\nESTAMOS EM 2018!\n");
	printf("\nDigite um mes do ano em numeros(EX: 1-Janeiro, 2-Fevereiro):\n");
	scanf("%i",&num);
	if (num==2){
		printf("\nO mês 2 tem 28 dias\n");
	}
	if(num==1 || num==3 || num==5 || num==7 or num==8 || num==10 || num==12){
		printf("\nO mês %i tem 31 dias\n",num);
	}
	if(num==4 || num==6 || num==9 || num==11){
		printf("\nO mês %i tem 30 dias\n",num);
	}
	if(num<=0 || num>12){
		printf("\nNÚMERO INVÁLIDO\n");
	}
	system("pause");
	return 0;
}

