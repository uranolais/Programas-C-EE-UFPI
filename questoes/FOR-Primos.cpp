/* Escreva  um  programa  que  imprima  os  primos  at� 
um n�mero digitado. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n,a=1,b=2;
	printf("\nDigite um n�mero inteiro:\n");
	scanf("%i",&n);
	for (a=1;a<=n;a++){//vai at� onde o numer for pra comparar todos eles
		for (b=2;b<=a;b++){//ele s� vai come�ar quando o b fo rmenor ou igual ao a, isso � no 2.
			if(a%b==0)break;//quais valores de a � divisivel por b
		}//o if anterior vai dividir o numero por TODOS os seus antecessores
		if(a==b){
			printf("\nO n�mero %i � primo\n",a);
		}
	}
	
	system("pause");
	return 0;
}
