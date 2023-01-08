/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int x=1;
	int y=0;
	//preincremento;
	//y=++x; 
	//posincremento;
	y=x++; 
	//y=x;
	//x=x+1;
	printf("\nx=%i\n",x);
	printf("\ny=%i\n",y);
	
	getchar();
	//system("pause");
	return 0;
}