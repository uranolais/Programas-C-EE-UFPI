/* Fa�a um programa que leia um n�mero e verifique se ele �
par ou �mpar.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("\nDigite um numero inteiro qualquer: ");
	scanf("%i",&a);
	if(a%2==0){
		printf("\nO numero %i e' par \n",a);
	}else if (a%2!=0){
		printf("\nO numero %i e' impar \n",a);
	}
	system("pause");
	return 0;
}
