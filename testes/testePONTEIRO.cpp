/*Ponteiros v�o acessar o endere�o de mem�ria da
vari�vel x*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int x;
	x=10;
	printf("Endere�o de x = %i\n",&x);//para acessar o endere�o
	int *ponteiro;
	ponteiro=&x; //ponteiro �= ao espa�o de mem�ria da variavel x
	printf("Valor de x = %i\n",*ponteiro);//com * acessa o valor e sem o endere�o;
	printf("Endere�o de x pelo ponteiro = %i ",ponteiro);
	//nao alterando o valor do y dps de alterar o x;
	int a=10;
	int y=a;
	a=20;
	printf("\nValor de a=%i\nValor de y=%i\n",a,y);
	//alterando o valor do v;
	int v=10;
	int *p;
	p=&v;//endere�o de memoria de v
	int c=20;
	*p=c;//valor do ponteiro � c
	printf("\nValor de v:%i\nValor de c:%i\n",v,c);
	getchar();
	return 0;
}