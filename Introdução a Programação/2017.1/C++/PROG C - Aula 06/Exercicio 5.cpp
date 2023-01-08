/*Fa�a um programa que receba letra inicial do estado estado civil de uma pessoa 
e imprima a descri��o:Casado(a), Solteiro(a), Vi�vo(a), desquitado(a), Divorciado(a),
Inv�lido.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	
char escolha;
int a;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite a letra correspondente ao seu estado civil:\nC-Casado(a)\nS-Solteiro(a)\nV-Vi�vo(a)\nD-Desquitado(a) ou Divorciado(a)\n\n");
	scanf("%c", &escolha);
	
	switch(escolha){
		case 'c':
			printf("\nCasado(a)\n");
			break;
		case 's':
			printf("\nSolteiro(a)\n");
			break;
		case 'v':
			printf("\nVi�vo(a)\n");
			break;
		case 'd':
			printf("\nEscolha entre as op��es:\n1-Desquitado(a)\n2-Divorciado(a)\n\n");
			scanf("%i", &a);
			switch(a){
				case 1:
					printf("\nDesquitado(a)\n");
					break;
				case 2:
					printf("\nDivorciado(a)\n");
					break;
				default:
					printf("\nOP��O INV�LIDA\n");
					break;
			}
			break;
		default:
			printf("\nINV�LIDO\n");
			break;
	}
	
	return 0;
}