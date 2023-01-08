/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int gVariavelGlobal=2;//antes de todas as funções, coloca o g pra lembrar que é global
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	void teste(void);
	printf("\nVariavel Global: %i",gVariavelGlobal);
	teste();
	teste();
	teste();
	system("pause");
	return 0;
}
void teste(void){
	int VariavelLocalAutomatica = 2;
	VariavelLocalAutomatica = VariavelLocalAutomatica*2;
	printf("\nVariavel Local Automática: %i \n",VariavelLocalAutomatica);
	
	static int VariavelLocalEstatica = 2;
	VariavelLocalEstatica = VariavelLocalEstatica*2;
	printf("\nVariavel Local Estatica: %i \n",VariavelLocalEstatica);
	printf("\nVariavel Global: %i\n",gVariavelGlobal);
}
