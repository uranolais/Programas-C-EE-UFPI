/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	struct lista{
		   int valor;
		   struct lista *proximo;	
	};
	struct lista m1,m2,m3;
	struct lista *gancho=&m1;
	m1.valor=10;
	m2.valor=20;
	m3.valor=30;
	
	m1.proximo=&m2;
	m2.proximo=&m3;
	m3.proximo= (struct lista *)0;//aponta para o valor nulo, termina.
	
	while(gancho !=(struct lista*)0){
		printf("%i\n",gancho->valor);
		gancho=gancho->proximo;
	}
	getchar();
	//system("pause");
	return 0;
}
