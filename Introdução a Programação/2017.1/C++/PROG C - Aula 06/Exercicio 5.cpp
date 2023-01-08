/*Faça um programa que receba letra inicial do estado estado civil de uma pessoa 
e imprima a descrição:Casado(a), Solteiro(a), Viúvo(a), desquitado(a), Divorciado(a),
Inválido.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	
char escolha;
int a;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite a letra correspondente ao seu estado civil:\nC-Casado(a)\nS-Solteiro(a)\nV-Viúvo(a)\nD-Desquitado(a) ou Divorciado(a)\n\n");
	scanf("%c", &escolha);
	
	switch(escolha){
		case 'c':
			printf("\nCasado(a)\n");
			break;
		case 's':
			printf("\nSolteiro(a)\n");
			break;
		case 'v':
			printf("\nViúvo(a)\n");
			break;
		case 'd':
			printf("\nEscolha entre as opções:\n1-Desquitado(a)\n2-Divorciado(a)\n\n");
			scanf("%i", &a);
			switch(a){
				case 1:
					printf("\nDesquitado(a)\n");
					break;
				case 2:
					printf("\nDivorciado(a)\n");
					break;
				default:
					printf("\nOPÇÃO INVÁLIDA\n");
					break;
			}
			break;
		default:
			printf("\nINVÁLIDO\n");
			break;
	}
	
	return 0;
}