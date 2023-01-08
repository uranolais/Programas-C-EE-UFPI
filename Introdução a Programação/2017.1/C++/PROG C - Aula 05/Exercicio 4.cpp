/*Faça um programa que leia o número de lados de um
polígono regular, e a medida do lado. Calcular e
imprimir o seguinte:
• a. Se o número de lados for igual a três, escrever
TRIÂGULO e o valor do seu perímetro.
• b. Se o número de lados for igual a quatro, escrever
QUADRADO e o valor da sua área.
• c. Se o número de lados for igual a cinco escrever
PENTÁGONO.
Em qualquer outra situação escrever Polígono não
identificado.*/ 
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	int lados, medida, perimetro, area;
	
	printf("Digite o numero de lados de um poligono regular: \n");
	scanf("%i", &lados);
	
	if (lados<=2){
		printf("CRIATURA EU DISSE POLIGONO!" );
	}
	
	if(lados>=3 && lados<6){
	if(lados==3){
		
		printf("Digite a medida do lado: \n");
	    scanf("%i", &medida);
	
		perimetro = 3*medida;
		printf("\n \n TRIANGULO \n");
		printf("Seu perimetro é: %i", perimetro);
	}
	
	if(lados==4){
		
		printf("Digite a medida do lado: \n");
	    scanf("%i", &medida);
	
		area = pow(medida,2);
		printf("\n \n QUADRADO \n");
		printf("Sua area é: %i", area);
	}
	
	if(lados==5){
		printf("\n \n PENTAGONO \n");
	}
	}
	
	else{
		printf("\nEsta é uma versão beta. Para acessar a versão completa, compre-a.\nAcesse: versaoplus.com.br\n");
	}
	
	return 0;
}

