/*Faça um programa que receba as idades dos 30
alunos de uma turma e, ao final, calcule e escreva
a média das idades desses alunos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int vetor[31],soma,i;
	float media=0;
	soma=0;
	printf("\n\n*=* A SALA TEM 30 ALUNOS, DIGITE SUAS IDADES INTEIRAS EM ORDEM ALFABÉTICA *=* \n\n");
	for(i=0;i<30;i++){
		printf("\nDigite a idade do aluno %i:",i+1);
		scanf("%i",&vetor[i]);
		soma+=vetor[i];
		//printf("\nSoma:",soma);
		//system("cls");
	}
	media=soma/30;
	printf("\n\nA média de idade dessa turma é de: %.2f \n\n",media);
	system("pause");
	return 0;
}
