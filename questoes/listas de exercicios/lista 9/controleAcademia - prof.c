#include <stdio.h>

typedef struct{
	char nome[100];
	float peso;
	float altura;
	int anoNasc;
	char cpf[12];	
}tAluno;

/* 
Objetivo: imprimir o menu e solicitar que o usuário digite uma opção
Retorno: a opção digitada.
*/
int menu(){
	int resp;
	printf("1 - Cadastrar\n2 - Pesquisar\n3 - Excluir\n4 - Listar\n0 - Sair\n");
	printf("Digite uma opcao do menu: ");
	scanf("%d", &resp);
    return resp;
}


/*
Objetivo do programa: gereciar os alunos de uma academia
*/
int main(){
	tAluno aluno[100];
	int resp;
	int i; //armazena o indice de um determinado aluno no vetor.
	int cont=0; //armazena a quantidade de alunos cadastrados
	char cpf[12];
	do{
		resp = menu();
		switch(resp){
			case 1: cont = cadastrar(aluno, cont);
			        break;
			case 2: printf("Digite o cpf do aluno: ");
			        scanf("%s", cpf);
			        i = pesquisar(aluno, cont, cpf);
			        if (i>=0)
                        imprimir(aluno[i]);
			        else
					     printf("Erro: Aluno nao encontrado!");
			        break;
			case 3: cont = exluir(aluno, cont);
			        break;
			case 4: listarTodos(aluno, cont);
			        break;
			case 0: break;
			default: printf("Erro: opcao invalida!\n");
			
		}
	}while(resp!=0);
	
	
	return 0;
}