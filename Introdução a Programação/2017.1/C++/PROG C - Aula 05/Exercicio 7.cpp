/*Faça um programa que leia o valor de três ângulos de um triângulo e escreva se 
o triângulo é acutângulo (Possui 3 ângulos agudos – menores que 90 graus), 
retângulo (Possui um ângulo reto – 90 graus), obtusângulo (possui um ângulo maior 
que 90 graus).*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a, b, c;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite possíveis valores para ângulos de um triângulo:\n");
	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	
	if(a+b+c==180){
		if(a<90 && b<90 && c<90){
		printf("\nÉ UM ACUTÂNGULO\n");	
		}
		
		if(a==90 || b==90 || c==90){
		printf("\nÉ UM RETÂNGULO\n");	
		}
		
		if(a>90 || b>90 || c>90){
		printf("\nÉ UM OBTUSÂNGULO\n");	
		}
	}
	
	else{
		printf("\nOS VALORES DIGITADOS NÃO FORMAM UM TRIÂNGULO.\n");
	}
	return 0;
}