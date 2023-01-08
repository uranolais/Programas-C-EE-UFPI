#include <stdio.h>
#include <string.h>
#define MAX 100

//Definição da estrutura tAluno
typedef struct
{
	char nome[MAX];
	float peso;
	float altura;
	int anoNasc;
	char cpf[12];
} tAluno;

/*
Objetivo do programa: gereciar os alunos de uma academia
*/
int main()
{
// 	Declaração das funções
	int menu();
	int cadastrar(tAluno aluno [], int cont);
	int  pesquisar(tAluno aluno [], int cont, char cpf[12]);
	void imprime (tAluno aluno1);
	void listar(tAluno aluno [], int cont);
	int excluir(tAluno aluno[], int cont);

// 	Declaração das variaveis
	tAluno aluno[MAX]; //Variavel do tipo tAluno (estrutura)
	int resp;
	int i; //armazena o indice de um determinado aluno no vetor.
	int cont = 0; //armazena a quantidade de alunos cadastrados
	char cpf[12];
	do
	{
		resp = menu();
		switch(resp)
		{
		case 1:
			cont = cadastrar(aluno, cont);
			break;
		case 2:
			printf("Digite o cpf do aluno: ");
			scanf("%s", cpf);
			i = pesquisar(aluno, cont, cpf);
			if (i >= 0)
				imprime(aluno[i]);
			else
				printf("\nErro: Aluno nao encontrado!\n\n");
			break;
		case 3:
			cont = excluir(aluno, cont);
			break;
		case 4:
			listar(aluno, cont);
			break;
		case 0:
			printf("\nPROGRAMA FINALIZANDO...\n");
			break;
		default:
			printf("Erro: opcao invalida!\n");
		}
	} while(resp != 0);
	return 0;
}
/*
Objetivo: imprimir o menu e solicitar que o usuário digite uma opção
Retorno: a opção digitada.
*/
int menu()
{
	int resp;
	printf("1 - Cadastrar\n2 - Pesquisar\n3 - Excluir\n4 - Listar\n0 - Sair\n");
	printf("Digite uma opcao do menu: ");
	scanf("%d", &resp);
	return resp;
}
/*
objetivo: cadastrar aluno
retorno: quantidades de alunos cadastrados
*/
int cadastrar (tAluno aluno1[], int cont)
{
	int  pesquisar(tAluno aluno[], int cont, char cpf[12]);
	int i;
	char resp;

	printf("Informe o cpf: ");
	scanf("%s", aluno1[cont].cpf);
	//algoritmo para verificar se o cpf digitado já foi cadastrado:
	for (i = 0; i < cont; i++)
		do
		{
			if (pesquisar(aluno1, cont, aluno1[cont].cpf) >= 0)
			{
				printf("\nALUNO JA CADASTRADO\n");
				printf("deseja cadastrar outro aluno? (s - sim, n - nao): ");
				scanf(" %c", &resp);
				if (resp == 's')
				{
					printf("Informe o cpf: ");
					scanf("%s", aluno1[cont].cpf);
				}
				else 
					return cont;
			}
		} while (strcmp(aluno1[cont].cpf, aluno1[i].cpf) == 0);
	printf("Digite o nome do aluno: ");
	scanf("%s", aluno1[cont].nome);
	printf("informe o peso: ");
	scanf("%f", &aluno1[cont].peso);
	printf("informe o ano de nascimento: ");
	scanf("%d", &aluno1[cont].anoNasc);
	printf("Digite a altura: ");
	scanf("%f", &aluno1[cont].altura);
	cont++;
	return cont;
}
/*
objetivo:  Pesquisar o aluno pelo cpf
retorno: Indice o vetor do cpf digitado, caso não possua retorna -1
*/
int  pesquisar(tAluno aluno[], int cont, char cpf[12])
{
	int i;
	for (i = 0; i < cont ; i++)
		if (strcmp(aluno[i].cpf, cpf) == 0)
			return i;
	return (-1);
}
/*
objetivo: Imprimir os dados do aluno pesquisado
retorno: Não retorna nada, apenas imprime
*/
void imprime (tAluno aluno)
{
	printf("\nNome: %s", aluno.nome);
	printf("\nAno de Nascimento: %d", aluno.anoNasc);
	printf("\nPeso: %.2f", aluno.peso);
	printf("\nAltura: %.2f", aluno.altura);
	printf("\n\n");
}
/*
objetivo: listar todos os alunos
retorno: não retorna nada, apenas imprime os dados no chamador da função
*/
void listar(tAluno aluno [], int cont)
{
	int i;
	if (cont == 0)
		printf("\nNENHUM REGISTRO ENCONTRADO!!\n\n");
	for (i = 0; i < cont; i++)
	{
		printf("\nNome: %s", aluno[i].nome);
		printf("\nCPF: %s", aluno[i].cpf);
		printf("\nAno de Nascimento: %d", aluno[i].anoNasc);
		printf("\nPeso: %.2f", aluno[i].peso);
		printf("\nAltura: %.2f\n", aluno[i].altura);
		printf("\n");
	}
}
/*
objetivo: Excluir dados de algum aluno
retorno: O valor de cont decrescido, caso o usuario responda 's'. caso não retorna o valor de cont inical
*/
int excluir(tAluno aluno[], int cont)
{
	char resp, r;
	int i, j;
	do
	{
		printf("Infome o CPF do aluno que deseja excluir do registro: ");
		scanf("%s", aluno[cont + 1].cpf);
		for (i = 0; i < cont; i++)
			if (strcmp(aluno[i].cpf, aluno[cont + 1].cpf) == 0)
				j = i;
		printf("\nDeseja excluir os dados do aluno %s (s-sim, n-nao)? ", aluno[j].nome);
		scanf(" %c", &resp);
		if(resp == 's') break;
		if (resp == 'n')
		{
			printf("\nDeseja excluir os dados de outro aluno (s-sim, n-nao)? ");
			scanf(" %c", &r);
		}
	}while (r == 's');
	if (resp == 's')
	{
		for (i = j; i < cont - 1; i++)
			aluno[i] = aluno[i + 1];
		cont--;
		printf("\nREGISTRO APAGADO COM SUCESSO!!\n\n");
	}
	return cont;
}
