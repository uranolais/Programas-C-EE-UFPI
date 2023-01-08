/* 4. Faça um programa que leia o número de lados de um
polígono regular, e a medida do lado. Calcular e
imprimir o seguinte:
• a. Se o número de lados for igual a três, escrever
TRIÂGULO e o valor do seu perímetro.
• b. Se o número de lados for igual a quatro, escrever
QUADRADO e o valor da sua área.
• c. Se o número de lados for igual a cinco escrever
PENTÁGONO.*/
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
	printf("\nIREMOS TRABALHAR COM TRÊS POLÍGONOS REGULARES:\n");
	printf("\nNúmero de lados:\nTriângulo = 3 lados\nQuadrado = 4 lados\nPentágono = 5 lados\n");
	printf("\nDigite o número de lados do seu polígono regular:");
	scanf("%i",&nl);
	if (nl==5){
		printf("\nSEU POLÍGONO É UM PENTÁGONO\n");
	}else if(nl==4){
		printf("\nSEU POLÍGONO É UM QUADRADO\n");
		printf("\nDigite o valor do lado do seu quadrado: ");
		scanf("%i",&q);
		area=pow(q,2);
		printf("\nA área de seu quadrado de lado %i é: %i\n",q,area);
	}else if(nl==3){
		printf("\nSEU POLÍGONO É UM TRIANGULO\n");
		printf("\nDigite os valores do lado de seu triangulo:");
		scanf("%i %i %i",&t1,&t2,&t3);
		perimetro=t1+t2+t3;
		printf("\nO perímetro do seu triângulo de lados %i,%i,%i é: %i\n",t1,t2,t3,perimetro);
	}else if(nl!=3 && nl!=4 && nl!=5){
		printf("\nNÚMERO INVÁLIDO\n");
	}
	system("pause");
	return 0;
}
