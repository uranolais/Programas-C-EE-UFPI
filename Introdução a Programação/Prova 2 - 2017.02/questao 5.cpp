// Autor(a)    : Jardeanne da Silva Ferreira
//Questão 5

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "portuguese");
	
	system("color 5F");
	
	float numero;
	float soma = 0;
	float somap = 0;
	float somai = 0;
	while (numero != 0)
	{
		printf("Digite um numero quaisquer (0 para sair): ");
		scanf("%f", &numero);
		if(numero != 0)
		{
			soma = soma + numero;
		}
		if (numero >0){
			somap = somap + numero;
		}
		if (numero <0){
			somai = somai + numero;
		}
	}
	
	    printf("\nO resultado da soma de todos os números é: %.1f \n", soma);
		printf("\nO resultado da soma de todos os números positivos é: %.1f \n", somap);
		printf("\nO resultado da soma de todos os números negativos é: %.1f \n", somai);

	return 0;
}
