/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	//exemplo 1:
	int num,valor;
	int *p;
	num=55;
	p=&num;     /* Pega o endereco de num */
	valor=*p;   /* Valor e igualado a num de uma maneira indireta */
	printf ("\n\n%d\n",valor);
	printf ("Endereco para onde o ponteiro aponta: %i\n",p);
	printf ("Valor da variavel apontada: %d\n",*p);
	return(0);
	//exemplo 2:
	getchar();
	//system("pause");
	return 0;
}
