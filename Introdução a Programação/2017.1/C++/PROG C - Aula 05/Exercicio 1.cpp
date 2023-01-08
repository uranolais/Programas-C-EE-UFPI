/*1. Faça um programa que leia os três coeficientes de uma equação e
imprima as soluções, quando existirem. Lembrando que a existência das
soluções depende de delta:
• a) Se delta for menos que zero não há soluções reais (imprima a mensagem
“NÃO HÁ SOLUÇÕES REAIS”);
• b) Se delta for igual a zero existe apenas uma solução real (imprima a
mensagem “EXISTE UMA SOLUÇÃO REAL, x = valor);
• c) Se delta for maior do que zero, temos duas soluções reais (imprima a
mensagem “EXISTEM DUAS SOLUÇÕES REAIS, x1 = valor_1 e x2 =
valor_2”).
sqrt = raiz quadrada
pow(numero, indice)*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(int argc, char** argv)
{
	int a, b, c, b2, delta, raizdelta, resolu1, resolu2, resodeltazero;
	
	printf("Sabendo que o arranjo de uma equação é de ax^2 + bx + c, digite \nos valores de a, b e c: \n");
	printf("a = ");
	scanf("%i", &a);
	printf("\nb = ");
	scanf("%i", &b);
	printf("\nc = ");
	scanf("%i", &c);
    printf("\nLogo temos a seguinte equacao: %i(x^2) + %ix + %i = 0", a,b,c);
    
    b2 = pow(b,2);
	delta = b2 -(4*a*c);
    
 
			
	if(delta<0){
	
	printf("\n \n NAO HA SOLUCOES REAIS\n");
	
	}
	
	if(delta==0){
    resodeltazero = (0-b)/(2*a); 		
	printf("\n \n EXISTE UMA SOLUCAO REAL, x = %i\n", resodeltazero);
	
	}
	
	if(delta>0){
	raizdelta = sqrt(delta);
   	resolu1 = (raizdelta - b)/(2*a);
	resolu2 = (0 - raizdelta - b)/(2*a);	
   	printf("\n \n EXISTEM DUAS SOLUÇOES REAIS, x1 = %i e x2 = %i\n", resolu1, resolu2);
			
	}


}