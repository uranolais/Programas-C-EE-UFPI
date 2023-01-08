/*Faça um programa que receba a letra inicial do estado civil
de uma pessoa e imprima a descrição: Casado(a), Solteiro(a),
Viúvo(a), desquitado(a), Divorciado(a), Inválido.*/
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
			printf("\nVIÚVO(A)!\n");
			break;
		case 'd':
			printf("\nDIVORCIADO(A)!\n");
			break;
		default:
			printf("\nINVÁLIDO\n");
			break;
	}
	system("pause");
	return 0;
}
