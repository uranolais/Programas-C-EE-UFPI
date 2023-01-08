/*Faça um programa que leia o preço e a categoria de um produto.O programa deve
calcular e mostrar o reajuste de acordo com a categoria:A=50%,B=25%,C=15% e 
outros=5%*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char** argv)
{
	float valor, reajust;
	char categoria;
	
	setlocale(LC_ALL, "portuguese");
		
    printf("\nDigite a categoria do produto:\nA\nB\nC\n\n");
	scanf("%c", &categoria);
	
	switch(categoria){
		case 'a':
			printf("\nDigite o preço do produto:\n");
	        scanf("%f", &valor);
			reajust=valor*1.5;
			printf("\nHouve um reajuste de 50%%\n");
			printf("O novo valor reajustado é: %f\n", reajust);
						break;
		case 'b':
			printf("\nDigite o preço do produto:\n");
	        scanf("%f", &valor);
			reajust=valor*1.25;
			printf("\nHouve um reajuste de 25%%\n");
			printf("O novo valor reajustado é: %f\n", reajust);	
			break;
		case 'c':
			printf("\nDigite o preço do produto:\n");
	        scanf("%f", &valor);
			reajust=valor*1.15;
			printf("\nHouve um reajuste de 15%%\n");
			printf("O novo valor reajustado é: %f\n", reajust);
						break;
		default:
			printf("\nDigite o preço do produto:\n");
	        scanf("%f", &valor);
			reajust=valor*1.05;
			printf("\nHouve um reajuste de 5%%\n");
			printf("O novo valor reajustado é: %f\n", reajust);
		
			break;
	}
	
		return 0;
}