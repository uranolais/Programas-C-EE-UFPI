/*Faça um programa que leia quatro números e imprima 
a soma dos que forem par.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,soma;
	printf("\nDigite 4 numeros inteiros qualquer: ");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	scanf("%i",&d);
	soma=0;
	if(a%2==0){
		soma+=a;
	}
	if(b%2==0){
		soma+=b;
	}
	if(c%2==0){
		soma+=c;
	}
	if(d%2==0){
		soma+=d;
	}
	printf("\nA soma dos numeros pares digitados e':%i \n",soma);
	system("pause");
	return 0;
}
