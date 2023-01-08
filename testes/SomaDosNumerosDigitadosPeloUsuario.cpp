//Exemplo 1: Soma dos números digitados pelo usuário
#include<stdio.h>
#include<stdlib.h>
int main(){
	float numero; 
	float soma=0;
	while (numero != -1) {
		printf("Digite um numero (-1 para sair): ");
		scanf("%f", &numero);
		if (numero != -1) {
			soma=soma+numero;
		}
	}
	printf("O resultado da soma e: %f",soma); //ou soma+=numero
	return 0;
}
