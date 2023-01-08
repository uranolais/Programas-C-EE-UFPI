/*3) Uma prova objetiva de 10 questões foi realizada em uma turma de 20 ALUNOS. 
Cada questão tinha 5 alternativas: a,b, c, d ou e. Cada questão vale 1 ponto. Faça 
um programa que mostre as notas dos alunos nessa prova. O gabarito da prova 
deve ser solicitado uma única vez. NO FINAL DO PROGRAMA IMPRIMA UM 
RELATORIO COM AS NOTAS DOS 20 ALUNOS, ou seja, a impressão não deve 
ser intercalada com entrada do usuário.  
Obs.: Implementar essa questão usando no máximo DOIS VETORES, ou seja, 
duas matrizes unidimensionais.  
Não é necessário validar a entrada de dados. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
//#define TAM 120
void limparBuffer ()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	char gabarito[10],n;
	printf("\nDigite o gabarito(não é necessario o uso de espaços): ");
	scanf("%s",&gabarito);
	limparBuffer();
	int i,j,nota=0,notas[20];
	for(i=0;i<20;i++){
		for(j=0;j<10;j++){
			printf("\nDigite a resposta da %ia. questão do %io. aluno:",j+1,i+1);
			n=getchar();
			limparBuffer();
			if(n==gabarito[j]){
				nota+=1;
			}
		}
		notas[i]=nota;
		nota=0;
		system("pause");
		system("cls");
	}
	for(int a=0;a<20;a++){
		printf("\nNota do %io. aluno: %i",a+1,notas[a]);
	}
	getchar();
	//system("pause");
	return 0;
}
