/*Fa�a um programa que leia dois valores reais (float) do
teclado e calcule a divis�o entre eles. Se o segundo for zero
imprima (DIVIS�O POR ZERO) .*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
	float num1, num2, divisao;
	
	printf("Digite dois valores reais: \n\n\n");
	scanf("%f", &num1);
	scanf("%f", &num2);
	
	divisao = num1/num2;
	
if (num2 == 0) {
printf("\nDIVIS�O POR ZERO\n");
}

else{
	printf("\n O quociente da divis�o � %f.", divisao);
}
}