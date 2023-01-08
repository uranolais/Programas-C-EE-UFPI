/*Faça um programa que leia três valores do teclado e
verifique se o primeiro é maior que a soma dos outros
dois.*/
// Autor(a)    : Jardeanne da Silva Ferreira


#include <stdio.h>
#include <math.h>



int main(int argc, char** argv)
{
	int valor1, valor2, valor3, resultado;
	
	printf("Digite tres valores: \n\n\n");
	scanf("%i", &valor1);
	scanf("%i", &valor2);
	scanf("%i", &valor3);
	
	resultado = valor2 + valor3;
	
if (valor1 > resultado) {
printf("\no primeiro valor digitado eh maior que a soma dos outros dois valores\n");
}

 if(valor1 < resultado) {
	printf("\nO primeiro valor digitado eh menor que a soma dos outros dois valores\n");
	}
	
	if (valor1 == resultado){
		printf("\nO primeiro valor digitado eh a soma dos outros dois valores\n");	
	}


return 0;

}