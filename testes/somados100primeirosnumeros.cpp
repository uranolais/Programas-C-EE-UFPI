/*2. Faça um programa que calcule a soma dos 100
primeiros números naturais.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	printf("A soma total dos 100 numeros e': \n");
	int soma=0;
	for(i=1;i<=100;i+=1){
		soma=soma+i;
	}
	printf("%i \n",soma);
	system("pause");
	return 0;
}
