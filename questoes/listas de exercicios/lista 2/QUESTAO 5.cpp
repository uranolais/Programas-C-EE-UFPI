/*5 – Imprima  a tabuada de multiplicação  de 1 a 10. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,n1,n2;
	for(n1=1;n1<11;n1++){
		printf("\nTabuada do %i\n",n1);
		for(n2=1;n2<11;n2++){
			i=n1*n2;
			printf(" %i ",i);
			
		}printf("\n");
	}
	
	getchar();
	//system("pause");
	return 0;
}
