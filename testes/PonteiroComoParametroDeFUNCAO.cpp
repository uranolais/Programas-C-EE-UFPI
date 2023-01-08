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
	
	void testeVariavel(int x);
	void testePonteiro(int *px);
	int teste=1;
	int *pteste=&teste;
	testeVariavel(teste);
	testePonteiro(pteste);
	
	printf("%i\n",teste);
	
	getchar();
	//system("pause");
	return 0;
}
void testeVariavel(int x){
	++x;
	printf("a %i\n",x);
}
void testePonteiro(int *px){
	++*px;
	printf("b %i\n",*px);
}