/*Fa�a um programa que leia o n�mero de lados de um
pol�gono regular, e a medida do lado. Calcular e
imprimir o seguinte:
� a. Se o n�mero de lados for igual a tr�s, escrever
TRI�GULO e o valor do seu per�metro.
� b. Se o n�mero de lados for igual a quatro, escrever
QUADRADO e o valor da sua �rea.
� c. Se o n�mero de lados for igual a cinco escrever
PENT�GONO.
Em qualquer outra situa��o escrever Pol�gono n�o
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
		printf("Seu perimetro �: %i", perimetro);
	}
	
	if(lados==4){
		
		printf("Digite a medida do lado: \n");
	    scanf("%i", &medida);
	
		area = pow(medida,2);
		printf("\n \n QUADRADO \n");
		printf("Sua area �: %i", area);
	}
	
	if(lados==5){
		printf("\n \n PENTAGONO \n");
	}
	}
	
	else{
		printf("\nEsta � uma vers�o beta. Para acessar a vers�o completa, compre-a.\nAcesse: versaoplus.com.br\n");
	}
	
	return 0;
}

