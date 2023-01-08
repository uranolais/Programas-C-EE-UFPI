/*Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo
usuário, usando o comando while. Repetir a execução do programa tantas vezes até
o usuário responder não (Lembrando o cálculo do fatorial:n! =n*n-1*n-2*... *2*1.
Outro número número (sim/não)?*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int num, i, outro;
	int fat = 1;
	i = 1;

	printf("\nDigite um numero positivo inteiro: ");
	scanf("%i", &num);

	while (i <= num)
	{
		fat = fat * i;
		i++;
	}
	printf("\n%d! = %d\n", num, fat);
	
	printf("\nOutro Numero (sim/nao) ?\n(OBS: Apenas numero maior que o digitado anterior)\n1-SIM\n2-NAO:\n");
	scanf("%d", &outro);
	
	switch(outro)
	{
	case 1:
		while(outro == 1)
		{
			printf("\nDigite um numero positivo inteiro: ");
			scanf("%i", &num);
			while (i <= num)
			{
				fat = fat * i;
				i++;
			}
			printf("\n%d! = %d\n", num, fat);
			
			printf("\nOutro Numero (sim/nao) ?\n(OBS: Apenas numero maior que o digitado anterior)\n1-SIM\n2-NAO:\n");
			scanf("%d", &outro);
					}
	case 2:
		return 0;
	}
}

