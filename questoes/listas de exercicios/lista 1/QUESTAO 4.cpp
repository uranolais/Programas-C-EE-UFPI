/*4) Crie um programa que leia o percurso em quilômetros, o tipo do carro e mostre o consumo 
estimado do veículo, sabendo-se que um carro tipo A faz 12km por litro de gasolina, um tipo B 
faz 10km e o tipo C, 8km. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	printf("\n\n*=*=*=*=*=*=*=*=*=* MENU INSTRUCIONAL DE CARROS *=*=*=*=*=*=*=*=*=*\n\n");
	printf("\nTipo A: Gasolina.");
	printf("\nTipo B: Alcool.");
	printf("\nTipo C: Flex.");
	char tipo;
	int percurso,consumo;
	printf("\n\nDigite o seu tipo de carro: ");
	scanf("%c",&tipo);
	printf("\nDigite o percurso do seu carro: ");
	scanf("%i",&percurso);
	switch(tipo){
		case 'a':
			consumo=12*percurso;
			printf("\nO consumo do seu carro é aproximadamente: %i \n",consumo);
			break;
		case 'b':
			consumo=10*percurso;
			printf("\nO consumo do seu carro é aproximadamente: %i \n",consumo);
			break;
		case 'c':
			consumo=8*percurso;
			printf("\nO consumo do seu carro é aproximadamente: %i \n",consumo);
			break;
		case 'A':
			consumo=12*percurso;
			printf("\nO consumo do seu carro é aproximadamente: %i \n",consumo);
			break;
		case 'B':
			consumo=10*percurso;
			printf("\nO consumo do seu carro é aproximadamente: %i \n",consumo);
			break;
		case 'C':
			consumo=8*percurso;
			printf("\nO consumo do seu carro é aproximadamente: %i \n",consumo);
			break;
		default:
			printf("\nINFORMAÇÕES INVÁLIDAS\n");
			break;
	}
	
	getchar();
	//system("pause");
	return 0;
}
