/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimamsg(void){//DIZENDO O QUE A FUN��O FAZ
	printf("\nTESTE\n");
}
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	//void imprimamsg(void);//declarando a fun��o
	imprimamsg();
	
	system("pause");
	return 0;
}
/*void imprimamsg(void){//DIZENDO O QUE A FUN��O FAZ
	printf("\nTESTE\n");
}*/
