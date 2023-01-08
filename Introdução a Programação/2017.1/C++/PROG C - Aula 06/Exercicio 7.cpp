/*Faça um programa que leia uma letra do alfabeto e imprima das mensagens a seguir 
a correspondente para cada caso :“Vogal maiúscula”, “Vogal minúscula”, “Consoante”.*/
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
			printf("\nVogal minúscula\n");
			break;
		case 'A': 
			printf("\nVogal maiúscula\n");
			break;
		case 'e':
			printf("\nVogal minúscula\n");
			break;
		case 'E': 
			printf("\nVogal maiúscula\n");
			break;
		case 'i':
			printf("\nVogal minúscula\n");
			break;
		case 'I': 
			printf("\nVogal maiúscula\n");
			break;
		case 'o':
			printf("\nVogal minúscula\n");
			break;
		case 'O': 
			printf("\nVogal maiúscula\n");
			break;
		case 'u':
			printf("\nVogal minúscula\n");
			break;
		case 'U': 
			printf("\nVogal maiúscula\n");
			break;
		default:
			printf("\nCONSOANTE\n");
			break;
	
		
	}
	
	return 0;
}