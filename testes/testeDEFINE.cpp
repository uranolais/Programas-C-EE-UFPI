/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIM 100
#define NAO -100
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int x;
	printf("\nDigite um numero inteiro:");
	scanf("%i",&x);
	if(x<=10){
		printf("%i",NAO);
	}else{
		printf("%i",SIM);
	}
	
	getchar();

	return 0;
}