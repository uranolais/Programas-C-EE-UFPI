/*2) Uma prova objetiva de 10 quest�es foi realizada em uma turma de 20 ALUNOS. 
Cada quest�o tinha 5 alternativas: a,b, c, d ou e. Cada quest�o vale 1 ponto. Fa�a 
um  programa  que  mostre  as  notas  dos  alunos  nessa  prova.  O  programa  deve 
solicitar o gabarito correto da prova uma �nica vez. Solicite o gabarito de cada 
aluno e mostre a nota do aluno.  
Obs.: Implementar essa quest�o usando no m�ximo UM VETOR, ou seja, uma 
matriz unidimensional. .  
N�o � necess�rio validar a entrada de dados. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
//#define TAM 120
void limparBuffer(){
	char c;
	while((c=getchar())!='\n' && c!=EOF);
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	struct correcao
	{
		char gabarito;
		
		
	}p,s,t,q,qu,sx,se,o,n,de;
	
	printf("\nDigite o gabarito da 1a. quest�o:");
	p.gabarito=getchar();
	limparBuffer();
	printf("\nDigite o gabarito da 2a. quest�o:");
	s.gabarito=getchar();
	limparBuffer();
	printf("\nDigite o gabarito da 3a. quest�o:");
	t.gabarito=getchar();	
	limparBuffer();
	printf("\nDigite o gabarito da 4a. quest�o:");
	q.gabarito=getchar();	
	limparBuffer();
	printf("\nDigite o gabarito da 5a. quest�o:");
	qu.gabarito=getchar();
	limparBuffer();
	printf("\nDigite o gabarito da 6a. quest�o:");
	sx.gabarito=getchar();
	limparBuffer();
	printf("\nDigite o gabarito da 7a. quest�o:");
	se.gabarito=getchar();	
	limparBuffer();
	printf("\nDigite o gabarito da 8a. quest�o:");
	o.gabarito=getchar();
	limparBuffer();
	printf("\nDigite o gabarito da 9a. quest�o:");
	n.gabarito=getchar();
	limparBuffer();
	printf("\nDigite o gabarito da 10a. quest�o:");
	de.gabarito=getchar();
	limparBuffer();
	system("cls");
	
	int i,j,nota=0;
	char res;
	for(i=0;i<20;i++){
		for(j=0;j<10;j++){
			printf("\nDigite a resposta %ia. quest�o do(a) %io. aluno(a):",j+1,i+1);
			res=getchar();
			limparBuffer();
			switch(j){
				case 0:
					if (res==p.gabarito){
						nota+=1;
					}
				case 1:
					if (res==s.gabarito){
						nota+=1;
					}
                case 2:
					if (res==t.gabarito){
						nota+=1;
					}
				case 3:
					if (res==q.gabarito){
						nota+=1;
					}
                case 4:
					if (res==qu.gabarito){
						nota+=1;
					}
				case 5:
					if (res==sx.gabarito){
						nota+=1;
					}
				case 6:
					if (res==se.gabarito){
						nota+=1;
					}
                case 7:
					if (res==o.gabarito){
						nota+=1;
					}
				case 8:
					if (res==n.gabarito){
						nota+=1;
					}
				case 9:
					if (res==de.gabarito){
						nota+=1;
					}

			}
		}printf("\nA nota do aluno foi: %i\n",nota);
		nota=0;
		system("pause");
		system("cls");
	}

		
	getchar();
	//system("pause");
	return 0;
}
