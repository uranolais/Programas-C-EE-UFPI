/* Escreva  um  programa  que  imprima  os  primos  até 
um número digitado. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n,a=1,b=2;
	printf("\nDigite um número inteiro:\n");
	scanf("%i",&n);
	for (a=1;a<=n;a++){//vai até onde o numer for pra comparar todos eles
		for (b=2;b<=a;b++){//ele só vai começar quando o b fo rmenor ou igual ao a, isso é no 2.
			if(a%b==0)break;//quais valores de a é divisivel por b
		}//o if anterior vai dividir o numero por TODOS os seus antecessores
		if(a==b){
			printf("\nO número %i é primo\n",a);
		}
	}
	
	system("pause");
	return 0;
}
