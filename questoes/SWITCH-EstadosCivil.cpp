/*Fa�a um programa que receba a letra inicial do estado civil
de uma pessoa e imprima a descri��o: Casado(a), Solteiro(a),
Vi�vo(a), desquitado(a), Divorciado(a), Inv�lido.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	char a;
	printf("\nDigite A letra inicial do seu estado civil:\n");
	a=getch();
	switch(a){
		case 'c':
			printf("\nCASADO(A)!\n");
			break;
		case 's':
			printf("\nSOLTEIRO(A)!\n");
			break;
		case 'v':
			printf("\nVI�VO(A)!\n");
			break;
		case 'd':
			printf("\nDIVORCIADO(A)!\n");
			break;
		default:
			printf("\nINV�LIDO\n");
			break;
	}
	system("pause");
	return 0;
}
