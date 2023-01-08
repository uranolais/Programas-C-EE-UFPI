/*Faça um programa que receba as idades dos 30
alunos de uma turma e, ao final, calcule e escreva
a média das idades desses alunos.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade;
	int n=1;
	int soma=0;
	int media;
	while (n<=30){
		printf("Digite a idade em ordem alfabetica: \n");
		scanf("%i",&idade);
		soma=soma+idade;
		n+=1;
	}
	media=soma/30;
	printf("A media das idades da turma e': %i \n",media);
	system("pause");
	return 0;
}
