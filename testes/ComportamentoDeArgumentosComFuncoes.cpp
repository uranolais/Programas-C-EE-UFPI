/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	void funcaoprintf(int x,int vetor[]);
	int x=10;
	int vetor[3]={10};
	funcaoprintf(x,vetor);//quando vc tiver passando uma função int,float,double, o codigo COPIA a variavel
	printf("\nVariavel int na função principal: %i\n",x);//tornam-se variaveis independentes 
	printf("\nVetor na função principal: %i\n",vetor[1]);
	system("pause");
	return 0;
}
void funcaoprintf(int x,int vetor[]){
	x=x+10;
	vetor[1]=20;
	printf("\nVariavel int na função printf: %i\n",x);
	printf("\nVetor na função printf: %i\n",vetor[1]);
	//return x;
}
