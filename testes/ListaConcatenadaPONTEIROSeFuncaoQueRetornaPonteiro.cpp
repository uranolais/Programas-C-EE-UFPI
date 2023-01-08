/*Lista concatenada*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
struct lista
{
	int valor;
	struct lista *proximo;
};

struct lista *procuraValor(struct lista *plista, int valor){
	while(plista !=(struct lista *)0){
		if (plista->valor==valor){
			return (plista);
		}else{
			plista=plista->proximo;
		}
	}return(struct lista*)0;
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	struct lista *procuraValor(struct lista *plista, int valor);
	struct lista m1,m2,m3;
	struct lista *resultado,*gancho=&m1;
	m1.valor=5;
	m2.valor=10;
	m3.valor=15;
	
	m1.proximo=&m2;
	m2.proximo=&m3;
	m3.proximo=0;
	int valor;
	printf("\nDigite o valor da pesquisa: ");
	scanf("%i",&valor);
	resultado=procuraValor(gancho,valor);
	
	if(resultado==(struct lista*)0){
		printf("\nValor nao encontrado!");
	}else{
		printf("\nValor %i encontrado.\n",resultado->valor);
	}
	
	getchar();
	//system("pause");
	return 0;
}