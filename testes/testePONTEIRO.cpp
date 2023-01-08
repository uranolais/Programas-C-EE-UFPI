/*Ponteiros vão acessar o endereço de memória da
variável x*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int x;
	x=10;
	printf("Endereço de x = %i\n",&x);//para acessar o endereço
	int *ponteiro;
	ponteiro=&x; //ponteiro é= ao espaço de memória da variavel x
	printf("Valor de x = %i\n",*ponteiro);//com * acessa o valor e sem o endereço;
	printf("Endereço de x pelo ponteiro = %i ",ponteiro);
	//nao alterando o valor do y dps de alterar o x;
	int a=10;
	int y=a;
	a=20;
	printf("\nValor de a=%i\nValor de y=%i\n",a,y);
	//alterando o valor do v;
	int v=10;
	int *p;
	p=&v;//endereço de memoria de v
	int c=20;
	*p=c;//valor do ponteiro é c
	printf("\nValor de v:%i\nValor de c:%i\n",v,c);
	getchar();
	return 0;
}