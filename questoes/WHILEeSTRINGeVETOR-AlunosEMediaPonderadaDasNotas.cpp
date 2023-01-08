/* Ler o nome de um aluno e suas duas notas A e B, 
e  após  calcular  a  média  ponderada  entre  estas 
notas (A tem peso 1 e B tem peso 2). Repetir este 
procedimento para uma turma composta por três 
alunos, usando o comando while.  */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n1=0,n2=0,i=0,a=0;
	int media=0;
	int vetor[4];
	char p[50],s[50],t[50];
	/*printf("\nDigite o nome dos três alunos: \n");
	gets(p);
	gets(s);
	gets(t);*/
	while (i<3){
		char s[50];
		printf("\nDigite o nome do %io. aluno: \n",i+1);
		gets(s);
		printf("\nDigite as duas notas do(a) %s:",s);
		scanf("%i %i",&n1,&n2);
		media=((n1*1)+(n2*2))/3;
		vetor[i]=media;
		i+=1;
		media=0;
		n1=0;
		n2=0;
		s[0]=0;
	}
	system("pause");
	return 0;
}
