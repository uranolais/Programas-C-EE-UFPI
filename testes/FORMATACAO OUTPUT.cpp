/*FORMATA��O OUTPUT*/
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
	
	//FORMATA��O DE VARIAVEIS INTEIRAS
	printf("\nVari�vel inteira (%%d): %d\n",intVar);
	printf("\nVari�vel inteira (%%i): %i\n",intVar);
	printf("\nVari�vel inteira (%%x): %x\n",intVar);
	printf("\nVari�vel inteira (%%o): %o\n",intVar);
	printf("\n");
	printf("\nVari�vel inteira (%%d): %d\n",intVar2);
	printf("\nVari�vel inteira (%%i): %i\n",intVar2);
	printf("\nVari�vel inteira (%%x): %x\n",intVar2);
	printf("\nVari�vel inteira (%%o): %o\n",intVar2);
	printf("\n");
	
	//FORMATA��O DE VARIAVEIS FLOAT E DOUBLE
	printf("\nVari�vel double (%%f): %f\n",doubleVar);
	printf("\nVari�vel double (%%e): %e\n",doubleVar);
	printf("\nVari�vel double (%%g): %g\n",doubleVar);
	printf("\nVari�vel double (%%a): %a\n",doubleVar);
	printf("\n");
	
	system("pause");
	return 0;
}
