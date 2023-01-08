// Autor(a)    : Jardeanne da Silva Ferreira
//Questão 4

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	float a, b, ad, sub, mult, div;
	
	char escolha;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite dois valores numéricos inteiros:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("\nDentre as 4 operações aritméticas a seguir, escolha:\nA-ADIÇÃO\nS-SUBTRAÇÃO\nM-MULTIPLICAÇÃO\nD-DIVISÃO\n\n");
    scanf("%s", &escolha);

	
	switch(escolha){
		case 'a':
			system("color 5F");
			ad=a+b;
			printf("\nA adição dos números selecionados é: %.1f\n", ad);
			break;
		
		case 's':
			system("color 6F");
			sub=a-b;
			printf("\nA subtração dos números selecionados é: %.1f\n", sub);
			break;
		
		case 'm':
			system("color 4F");
			mult=a*b;
			printf("\nO produto dos números selecionados é: %.1f\n", mult);
			break;
		
		case 'd':
			system("color 12F");
			div=a/b;
			printf("\nO valor inteiro do quociente entre os valores selecionados é: %.1f\n", div);
			break;
		
		default:
			printf("\nESCOLHA INVÁLIDA\n");
			break;
	}
	
	return 0;
}