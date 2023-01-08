/*5.  Faça  um  programa  que  calcule  e  mostre  a  soma  dos  números  pares  contidos  no 
intervalo de 0 a 180. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n,i,soma=0;
	for(i=0;i<180;i=i+2){
		soma+=i;
	}printf("\nA soma é: %i\n",soma);
	
	getchar();
	//system("pause");
	return 0;
}
