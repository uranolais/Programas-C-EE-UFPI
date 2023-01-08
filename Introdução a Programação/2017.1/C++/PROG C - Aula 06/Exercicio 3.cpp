/*Faça um programa receba dois valores e exiba um menu para o usuário escolher 
uma das quatro operações aritméticas. Baseado nessa escolha o programa deverá 
calcular e imprimir o resultado*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a, b, escolha, ad, sub, mult, div;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite dois valores numéricos inteiros:\n");
	scanf("%i", &a);
	scanf("%i", &b);
	printf("Dentre as 4 operações aritméticas a seguir, escolha:\n1-ADIÇÃO\n2-SUBTRAÇÃO\n3-MULTIPLICAÇÃO\n4-DIVISÃO\n\n");
	scanf("%i", &escolha);
	
	switch(escolha){
		case 1:
			ad=a+b;
			printf("\nA adição dos números selecionados é: %i\n", ad);
			break;
		
		case 2:
			sub=a-b;
			printf("\nA subtração dos números selecionados é: %i\n", sub);
			break;
		
		case 3:
			mult=a*b;
			printf("\nO produto dos números selecionados é: %i\n", mult);
			break;
		
		case 4:
			div=a/b;
			printf("\nO valor inteiro do quociente entre os valores selecionados é: %i\n", div);
			break;
		
		default:
			printf("\nESCOLHA INVÁLIDA\n");
			break;
	}
	return 0;
}