/*2. Fa�a um algoritmo que leia um n�mero 
e imprima a quinta parte desse n�mero. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num;
	printf("\nDigite um n�mero: ");
	scanf("%i",&num);
	float n=(float)num/5;
	printf("\nA quinta parte de %i �: %.2f\n",num,n);
	getchar();
	//system("pause");
	return 0;
}
