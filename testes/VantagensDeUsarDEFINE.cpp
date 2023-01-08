/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define A 1000
void umaFuncao(void){
	printf("%i\n",A);
}
void umaOutraFuncao(void){
	printf("%i\n",A);
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	void umaFuncao(void);
	void umaOutraFuncao(void);
	printf("%i\n",A);
	umaFuncao();
	umaOutraFuncao();
	
	
	getchar();
	//system("pause");
	return 0;
}