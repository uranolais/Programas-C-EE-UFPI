/*Fa�a um programa receba dois valores e exiba um menu para o usu�rio escolher 
uma das quatro opera��es aritm�ticas. Baseado nessa escolha o programa dever� 
calcular e imprimir o resultado*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a, b, escolha, ad, sub, mult, div;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite dois valores num�ricos inteiros:\n");
	scanf("%i", &a);
	scanf("%i", &b);
	printf("Dentre as 4 opera��es aritm�ticas a seguir, escolha:\n1-ADI��O\n2-SUBTRA��O\n3-MULTIPLICA��O\n4-DIVIS�O\n\n");
	scanf("%i", &escolha);
	
	switch(escolha){
		case 1:
			ad=a+b;
			printf("\nA adi��o dos n�meros selecionados �: %i\n", ad);
			break;
		
		case 2:
			sub=a-b;
			printf("\nA subtra��o dos n�meros selecionados �: %i\n", sub);
			break;
		
		case 3:
			mult=a*b;
			printf("\nO produto dos n�meros selecionados �: %i\n", mult);
			break;
		
		case 4:
			div=a/b;
			printf("\nO valor inteiro do quociente entre os valores selecionados �: %i\n", div);
			break;
		
		default:
			printf("\nESCOLHA INV�LIDA\n");
			break;
	}
	return 0;
}