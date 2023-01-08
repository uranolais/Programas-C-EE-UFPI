/*FORMATAÇÃO OUTPUT*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int intVar = 9999999;
	int intVar2 = 10;
	double doubleVar = 100.123456789;
	
	//FORMATAÇÃO DE VARIAVEIS INTEIRAS
	printf("\nVariável inteira (%%d): %d\n",intVar);
	printf("\nVariável inteira (%%i): %i\n",intVar);
	printf("\nVariável inteira (%%x): %x\n",intVar);
	printf("\nVariável inteira (%%o): %o\n",intVar);
	printf("\n");
	printf("\nVariável inteira (%%d): %d\n",intVar2);
	printf("\nVariável inteira (%%i): %i\n",intVar2);
	printf("\nVariável inteira (%%x): %x\n",intVar2);
	printf("\nVariável inteira (%%o): %o\n",intVar2);
	printf("\n");
	
	//FORMATAÇÃO DE VARIAVEIS FLOAT E DOUBLE
	printf("\nVariável double (%%f): %f\n",doubleVar);
	printf("\nVariável double (%%e): %e\n",doubleVar);
	printf("\nVariável double (%%g): %g\n",doubleVar);
	printf("\nVariável double (%%a): %a\n",doubleVar);
	printf("\n");
	
	system("pause");
	return 0;
}
