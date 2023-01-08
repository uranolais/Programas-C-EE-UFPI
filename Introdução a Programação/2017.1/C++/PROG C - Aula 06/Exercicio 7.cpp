/*Fa�a um programa que leia uma letra do alfabeto e imprima das mensagens a seguir 
a correspondente para cada caso :�Vogal mai�scula�, �Vogal min�scula�, �Consoante�.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	char letra;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite uma letra do alfabeto:\n");
	scanf("%c", &letra);
	
	switch(letra){
		case 'a':
			printf("\nVogal min�scula\n");
			break;
		case 'A': 
			printf("\nVogal mai�scula\n");
			break;
		case 'e':
			printf("\nVogal min�scula\n");
			break;
		case 'E': 
			printf("\nVogal mai�scula\n");
			break;
		case 'i':
			printf("\nVogal min�scula\n");
			break;
		case 'I': 
			printf("\nVogal mai�scula\n");
			break;
		case 'o':
			printf("\nVogal min�scula\n");
			break;
		case 'O': 
			printf("\nVogal mai�scula\n");
			break;
		case 'u':
			printf("\nVogal min�scula\n");
			break;
		case 'U': 
			printf("\nVogal mai�scula\n");
			break;
		default:
			printf("\nCONSOANTE\n");
			break;
	
		
	}
	
	return 0;
}