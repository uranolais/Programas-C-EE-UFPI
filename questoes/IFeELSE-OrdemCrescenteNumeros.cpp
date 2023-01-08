/*Faça um programa que receba dois números e os imprima
em ordem crescente.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b;
	printf("\nDigite 2 numeros:\n");
	scanf("%i %i",&a,&b);
	if(a==b){
		printf("\nOs numeros %i e %i sao iguais\n");
	}else if(a!=b)
	{
		if(a>b){
			printf("\n O numero %i e' maior que o numero %i.\nOrdem crescente:%i %i\n",a,b,b,a);
		}else if(a<b){
			printf("\n O numero %i e' maior que o numero %i.\nOrdem crescente:%i %i\n",b,a,a,b);
		}
	}
	system("pause");
	return 0;
}
