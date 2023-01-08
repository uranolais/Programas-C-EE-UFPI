// Autor(a)    : Jardeanne da Silva Ferreira
//Questão 3

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	float alt, mass, IMC;
	
	setlocale(LC_ALL, "portuguese");
	
	system("color 5F");
	
	printf("Digite a altura (em metros) da criatura: ");
	scanf("%f",&alt);
	printf("\nDigite a massa cospórea (em kg) da criatura: ");

	scanf("%f",&mass);
	
	IMC = mass/(alt*alt);
	
    printf("\nO IMC da criatura é de: %.2f.\n", IMC);
    printf("\n***********************************************");
    printf("\n**     Taxa do IMC     *     Diágnóstico     **");
    printf("\n***********************************************");
    printf("\n**      0 - 18,99      *     Muito Magro     **");
    printf("\n**     19 - 24,99      *       Normal        **");
	printf("\n**     25 - 29,99      *     Sobrepeso       **");
	printf("\n**     30 - 39,99      *       Obeso         **");
	printf("\n**    Acima de 40      * Obesidade Morbida   **");
    printf("\n***********************************************");
    
    if (IMC > 0 && IMC <=18.99 ){
		printf("\n\n               DIAGNÓSTICO: Muito Magro.\n");
	}
	    else if (IMC <=24.99){
		printf("\n\n              DIAGNÓSTICO: Normal.\n");
	}
	    else if (IMC <=29.99){
		printf("\n\n              DIAGNÓSTICO: Sobrepeso.\n");
	}
	    else if (IMC <=39.99){
		printf("\n\n              DIAGNÓSTICO: Obeso.\n");
	}
	
	else{
		printf("\n\n              DIAGNÓSTICO: Obesidade Morbida.\n");
	}

	return 0;
}