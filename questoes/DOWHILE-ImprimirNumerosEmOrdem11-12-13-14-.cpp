/*4. Escreva um programa que imprima os seguintes 
dados na tela.  
    1-1 1-2 1-3 1-4 1-5  
    2-1 2-2 2-3 2-4 2-5  
    3-1 3-2 3-3 3-4 3-5  
    4-1 4-2 4-3 4-4 4-5  
    5-1 5-2 5-3 5-4 5-5 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,j;
	do{
		for (i=1;i<=5;i++){
			printf("\n");
			for (j=1;j<=5;j++){
				printf("%i-%i ",i,j);
			}
		}
	}while (i<=5);
	
	system("pause");
	return 0;
}
