/*3) O prazo final de pagamento do IPVA de um carro � de acordo com o d�gito final da placa. Por 
exemplo, o carro com o n�mero 3122 na placa, deve ter o IPVA pago at� o m�s 2, j� o de 
numera��o 8989, deve ser pago at� o m�s 9.  Crie um programa que leia o n�mero de 4 d�gitos 
da placa do carro(use o tipo int) e informe o NOME do m�s que corresponde ao prazo final de 
pagamento do IPVA desse carro.  (usar o comando switch) */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int placa,ano;
	printf("\nDigite o n�mero da placa do seu carro: ");
	scanf("%i",&placa);
	ano=placa%10;//pegando o resto
	switch(ano){
		case 1:
			printf("\nJaneiro.\n");
			break;
		case 2:
			printf("\nFevereiro.\n");
			break;
		case 3:
			printf("\nMar�o.\n");
			break;
		case 4:
			printf("\nAbril.\n");
			break;
		case 5:
			printf("\nMaio.\n");
			break;
		case 6:
			printf("\nJunho.\n");
			break;
		case 7:
			printf("\nJulho.\n");
			break;
		case 8:
			printf("\nAgosto.\n");
			break;
		case 9:
			printf("\nSetembro.\n");
			break;
		case 0:
			printf("\nOutubro.\n");
			break;
		default:
			printf("\nINV�LIDO.\n");
	}
	
	
	
	getchar();
	//system("pause");
	return 0;
}
