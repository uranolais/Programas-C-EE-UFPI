/*Fa�a um programa que leia o valor de tr�s �ngulos de um tri�ngulo e escreva se 
o tri�ngulo � acut�ngulo (Possui 3 �ngulos agudos � menores que 90 graus), 
ret�ngulo (Possui um �ngulo reto � 90 graus), obtus�ngulo (possui um �ngulo maior 
que 90 graus).*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a, b, c;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite poss�veis valores para �ngulos de um tri�ngulo:\n");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if(a+b+c==180){
		if(a<90 && b<90 && c<90){
		printf("\n� UM ACUT�NGULO\n");	
		}
		
		if(a==90 || b==90 || c==90){
		printf("\n� UM RET�NGULO\n");	
		}
		
		if(a>90 || b>90 || c>90){
		printf("\n� UM OBTUS�NGULO\n");	
		}
	}
	
	else{
		printf("\nOS VALORES DIGITADOS N�O FORMAM UM TRI�NGULO.\n");
	}
	return 0;
}