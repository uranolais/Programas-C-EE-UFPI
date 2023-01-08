/*OVERFLOW e UNDERFLOW*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	/*short x=214783647; //overflow
	short y=-214783648; //underflow*/
	//solucao
	long int x=21478364760; 
	long int y=-21478364880;
	printf("%i\n",x);
	printf("%i\n",y);
	
	getchar();
	//system("pause");
	return 0;
}
