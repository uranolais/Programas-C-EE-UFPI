/*Faça um programa que calcule o novo salário de um
funcionário que recebeu um reajuste de 6%. Subtraia 2%
de INSS e 3% de plano de saúde. Imprima tudo no final.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");

	float sal, nov, novv;

	printf("Digite o salário do funcionário: ");
	scanf("%f", &sal);

	nov=sal*1.06;
	novv=nov - nov*0.02 - nov*0.03;

	printf("\nO novo salário após os reajustes é de: R$%.2f.\n", novv);

	return 0;
}
