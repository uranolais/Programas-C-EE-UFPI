/*Escreva uma função que some dois inteiros e
retorne o valor da soma.*/
#include <stdio.h>
#include <stdlib.h>
int soma(int x, int y){
	return(x+y);
}
int main()
{
	int x,y,somas;
	printf("\nDigite dois numeros:");
	scanf("%i %i",&x,&y);
	//scanf("%i",&y);
	somas=soma(x,y);
	printf("\nA soma dos numeros %i e %i e' %i:\n",x,y,somas);
	system("pause");
	return 0;
}
