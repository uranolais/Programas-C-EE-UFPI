// Autor(a)    : Jardeanne da Silva Ferreira
//Quest�o 4

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	float a, b, ad, sub, mult, div;
	
	char escolha;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite dois valores num�ricos inteiros:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("\nDentre as 4 opera��es aritm�ticas a seguir, escolha:\nA-ADI��O\nS-SUBTRA��O\nM-MULTIPLICA��O\nD-DIVIS�O\n\n");
    scanf("%s", &escolha);

	
	switch(escolha){
		case 'a':
			system("color 5F");
			ad=a+b;
			printf("\nA adi��o dos n�meros selecionados �: %.1f\n", ad);
			break;
		
		case 's':
			system("color 6F");
			sub=a-b;
			printf("\nA subtra��o dos n�meros selecionados �: %.1f\n", sub);
			break;
		
		case 'm':
			system("color 4F");
			mult=a*b;
			printf("\nO produto dos n�meros selecionados �: %.1f\n", mult);
			break;
		
		case 'd':
			system("color 12F");
			div=a/b;
			printf("\nO valor inteiro do quociente entre os valores selecionados �: %.1f\n", div);
			break;
		
		default:
			printf("\nESCOLHA INV�LIDA\n");
			break;
	}
	
	return 0;
}