#include <stdio.h>
#include <stdlib.h>
int main()
{
	char name[100];
	printf("Digite uma palavra:");
	gets(name);
	printf("\n \n Voce digitou %s",name);
	system("pause");
	return 0;
}
