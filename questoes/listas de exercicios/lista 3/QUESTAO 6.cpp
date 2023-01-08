/*6. Uma escola tem 5 turmas e cada turma tem n alunos. O número de alunos de cada
turma deve ser fornecido pelo usuário. O programa deve ler a média de cada aluno
(obrigue que o valor da média esteja entre 0 e 10 inclusive)e imprimir para cada turma o
total de alunos com média superior a 7. O algoritmo deve imprimir também a média
geral da escola.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	//jeito 1:
	int m=0,c=0;
	float media;
	for (int i=0;i<5;i++){
		int n=0,nota=0,soma=0,s=0,a=0;
		printf("\nDigite a quantidade de alunos da %ia. turma: ",i+1);
		scanf("%i",&n);
		c+=n;
		for (int j=0;j<n;j++){
			printf("\nDigite a media do %io. aluno da %ia. turma: ",j+1,i+1);
			scanf("%i",&nota);
			s+=nota;
			if (nota<0 || nota>10){
				printf("\nInformação errada!");
				j--;
			}else if(nota>=0 && nota<=10){
				
				if(nota>7){
					soma+=nota;	
					a++;
				}
				
			}
			
		}printf("\nNa %ia. sala houveram %i alunos com média superior a 7.",i+1,a);
		m+=s;
		system("pause");
		system("cls");
	}
	printf("\nc=%i, m=%i\n",c,m);
	media=(float)m/c;
	printf("\nA media geral da escola é: %f\n",media);
	
	
	
	
	getchar();
	//system("pause");
	return 0;
}
