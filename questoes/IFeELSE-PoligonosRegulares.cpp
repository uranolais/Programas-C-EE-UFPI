/* 4. Fa�a um programa que leia o n�mero de lados de um
pol�gono regular, e a medida do lado. Calcular e
imprimir o seguinte:
� a. Se o n�mero de lados for igual a tr�s, escrever
TRI�GULO e o valor do seu per�metro.
� b. Se o n�mero de lados for igual a quatro, escrever
QUADRADO e o valor da sua �rea.
� c. Se o n�mero de lados for igual a cinco escrever
PENT�GONO.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int nl;
	int t1,t2,t3,perimetro;
	int q,area;
	printf("\nIREMOS TRABALHAR COM TR�S POL�GONOS REGULARES:\n");
	printf("\nN�mero de lados:\nTri�ngulo = 3 lados\nQuadrado = 4 lados\nPent�gono = 5 lados\n");
	printf("\nDigite o n�mero de lados do seu pol�gono regular:");
	scanf("%i",&nl);
	if (nl==5){
		printf("\nSEU POL�GONO � UM PENT�GONO\n");
	}else if(nl==4){
		printf("\nSEU POL�GONO � UM QUADRADO\n");
		printf("\nDigite o valor do lado do seu quadrado: ");
		scanf("%i",&q);
		area=pow(q,2);
		printf("\nA �rea de seu quadrado de lado %i �: %i\n",q,area);
	}else if(nl==3){
		printf("\nSEU POL�GONO � UM TRIANGULO\n");
		printf("\nDigite os valores do lado de seu triangulo:");
		scanf("%i %i %i",&t1,&t2,&t3);
		perimetro=t1+t2+t3;
		printf("\nO per�metro do seu tri�ngulo de lados %i,%i,%i �: %i\n",t1,t2,t3,perimetro);
	}else if(nl!=3 && nl!=4 && nl!=5){
		printf("\nN�MERO INV�LIDO\n");
	}
	system("pause");
	return 0;
}
