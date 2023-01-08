/*Faça um programa que receba as idades dos 30 alunos de uma uma turma e, ao final, calcule e escreva 
a média das idades desses alunos.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{
	int idade,n;
	int soma=0;

    setlocale(LC_ALL, "portuguese");
	
	for(n=1; n<=30; n++){
		
	printf("Digite a idade dos alunos da sua turma em ordem alfabética:\n");
	scanf("%i", &idade);
	soma=soma+idade;
	}	
	
	printf("A soma das idades de todos os alunos da turma é: %i", soma);

	return 0;
}

