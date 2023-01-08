/*Ler o nome de um aluno e suas duas notas A e B, e após calcular a média ponderada
entre estas notas(A tem peso 1 e B tem peso 2). Repetir este procedimento para uma
turma composta por três alunos, usando o comando while.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <locale.h>

int main(int argc, char** argv)
{

	float media, A, B;
	int n = 0;
	setlocale(LC_ALL, "portuguese");

	while(n < 3)
	{
		n = n + 1;

		printf("\nDigite a nota A do aluno: ");
		scanf("%f", &A);
		printf("Digite a nota B do aluno: ");
		scanf("%f", &B);

		media = ((A) + (B * 2)) / 3;

		printf("\nA Media deste aluno foi %f.\n", media);
	}


	return 0;
}


