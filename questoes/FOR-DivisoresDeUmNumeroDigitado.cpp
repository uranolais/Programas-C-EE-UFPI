/*5. (Resolvido) Fa�a um programa que calcule os
divisores de um n�mero qualquer, informado pelo
usu�rio.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num,i;
	printf("\nDigite um n�mero inteiro qualquer:\n");
	scanf("%i",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			printf("\nDivisor de %i �: %i \n",num,i);
		}
	}
	system("pause");
	return 0;
}
