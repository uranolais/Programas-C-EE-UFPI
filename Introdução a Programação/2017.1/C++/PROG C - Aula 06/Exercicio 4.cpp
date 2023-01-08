/*Faça um programa que leia um número e o escreva por extenso se estiver no 
intervalo de 0 a 20.Caso contrário, escreva “número inválido”.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a;
	
	setlocale(LC_ALL, "portuguese");
	
    printf("Digite um valor numérico entre 1 e 20:\n\n");
	scanf("%i", &a);
	
	switch(a){
		case 1:
			printf("\nUM\n");
			break;
		case 2:
			printf("\nDOIS\n");
			break;
		case 3:
			printf("\nTRÊS\n");
			break;
        
		case 4:
			printf("\nQUATRO\n");
			break;	
		case 5:
			printf("\nCINCO\n");
			break;
		case 6:
			printf("\nSEIS\n");
			break;
		case 7:
		    printf("\nSETE\n");
		    break;
		case 8:
			printf("\nOITO\n");
			break;
		case 9:
			printf("\nNOVE\n");
			break;
		case 10:
			printf("\nDEZ\n");
			break;
		case 11:
			printf("\nONZE\n");
			break;
		case 12:
			printf("\nDOZE\n");
			break;
		case 13:
			printf("\nTREZE\n");
			break;
		case 14:
			printf("\nQUATORZE\n");
			break;
		case 15:
			printf("\nQUINZE\n");
			break;
		case 16:
			printf("\nDEZESSEIS\n");
			break;
		case 17:
			printf("\nDEZESSETE\n");
			break;
		case 18:
			printf("\nDEZOITO\n");
			break;
		case 19:
			printf("\nDEZENOVE\n");
			break;
		case 20:
			printf("\nVINTE\n");
			break;
		default:
		    printf("NÚMERO INVÁLIDO");
		
		}
	return 0;
}