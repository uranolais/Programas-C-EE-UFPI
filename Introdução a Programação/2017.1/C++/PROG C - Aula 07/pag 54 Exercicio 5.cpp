/*Fa�a um programa que calcule os divisores de um n�mero qualquer, informado pelo usu�rio.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int a,n;

    setlocale(LC_ALL, "portuguese");
		
	printf("Digite um qualquer valor num�rico inteiro:\n");
	scanf("%i", &a);
	printf("Os divisores do n�mero digitado s�o:\n\n");

	for(n=1; n<=a; n++){
		
		if(a%n==0){
		printf("%d\n", n);
		}
	}
	return 0;
}
