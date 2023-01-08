/*1. Faça um programa que leia os três coeficientes de uma equação e
imprima as soluções, quando existirem. Lembrando que a existência das
soluções depende de delta:
• a) Se delta for menos que zero não há soluções reais (imprima a mensagem
“NÃO HÁ SOLUÇÕES REAIS”);
• b) Se delta for igual a zero existe apenas uma solução real (imprima a
mensagem “EXISTE UMA SOLUÇÃO REAL, x = valor);
• c) Se delta for maior do que zero, temos duas soluções reais (imprima a
mensagem “EXISTEM DUAS SOLUÇÕES REAIS, x1 = valor_1 e x2 =
valor_2”).*/
//ax*x+bx+c b*b-4*a*c x+-raiz de delta/2*a
//DELTA POSITIVO: a=1 b=-5 c=4, x=1 x=4
//DELTA ZERO: a=1 b=6 c=9, x=3
//DELTA NEGATIVO: a=2 b=3 c=3
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int a,b,c,delta,x1,x2;
	printf("\nDigite os falores dos quoeficientes da equação de 2ºgrau:\na:\nb:\nc:\n");
	scanf("%i %i %i",&a,&b,&c);
	printf("\n\nSua Equação: %ix*x+%ix+%i\n\n",a,b,c);
	printf("\nSeu delta: %i*%i-4*%i%i\n",b,b,a,c);
	delta=(b*b)-(4*a*c);
	if (delta<0){
		printf("\nNÃO HÁ SOLUÇÕES REAIS\n");
	}else if(delta==0){
		x1=(-b)/(2*a);
		printf("\nEXISTE UMA SOLUÇÃO REAL: X = %i\n",x1);
	}else if(delta>0){
		x1=((-b)+(sqrt(delta)))/(2*a);
		x1=((0-b)-(sqrt(delta)))/(2*a);
		printf("\nEXISTEM DUAS SOLUÇÕES REAIS:\nX'=%i\nX''=%i;",x1,x2);
	}
	
	system("pause");
	return 0;
}
