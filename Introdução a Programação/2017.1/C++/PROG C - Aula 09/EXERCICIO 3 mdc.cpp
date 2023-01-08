/* Escreva um programa que, dados dois números, imprima o MDC MAXIMO DIVISOR.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include<stdio.h>
#include<stdlib.h>

int main(){

	int num,num2, x, y, r;

	printf("Digite um numero inteiro: ");
	scanf("%d",&num);
	printf("Digite outro numero inteiro: ");
	scanf("%d",&num2);

	x = num;
	y = num2;

	do{
		r = x % y; // divisao para reconhecer o resto
		x = y; // x passa a ser y
		y = r; // y passa a ser o resto até o resto ser zero.
		
		/*exe: 26 e 6
		26%6 = resto = 2
		6%2= resto = 0
		FIM */
		
		printf("\n%d r", r);
			printf("\n%d x", x);
				printf("\n%d y", y);
	}
	
	while(r!=0); // enquanto r for diferente de zero. ou seja ele vai buscar valores ate r==0

	printf("\n\nO MDC entre %d e %d e: %d\n",num,num2,x);
	return 0;
}