/*3) Uma prova objetiva de 10 quest�es foi realizada em uma turma de 20 ALUNOS. 
Cada quest�o tinha 5 alternativas: a,b, c, d ou e. Cada quest�o vale 1 ponto. Fa�a 
um programa que mostre as notas dos alunos nessa prova. O gabarito da prova 
deve ser solicitado uma �nica vez. NO FINAL DO PROGRAMA IMPRIMA UM 
RELATORIO COM AS NOTAS DOS 20 ALUNOS, ou seja, a impress�o n�o deve 
ser intercalada com entrada do usu�rio.  
Obs.: Implementar essa quest�o usando no m�ximo DOIS VETORES, ou seja, 
duas matrizes unidimensionais.  
N�o � necess�rio validar a entrada de dados. */
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
	printf("\nDigite o gabarito(n�o � necessario o uso de espa�os): ");
	scanf("%s",&gabarito);
	limparBuffer();
	int i,j,nota=0,notas[20];
	for(i=0;i<20;i++){
		for(j=0;j<10;j++){
			printf("\nDigite a resposta da %ia. quest�o do %io. aluno:",j+1,i+1);
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
