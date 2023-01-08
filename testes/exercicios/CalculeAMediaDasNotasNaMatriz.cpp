/*Crie um programa que que pede que o usuário digite 4 notas de 0 a 10 (tipo float) de 4 alunos e 
os valores deverão ser armazendos em uma matriz bidimensional. 
Faça a média das notas de cada aluno e armazene as 4 médias em um vetor. 
Por última coloque na tela do usuário uma mensagem informando a média de cada aluno.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//MEU JEITO DE FAZER
	/*float media;
	float notas[4][4];
	float medias[4];
	int i,j;
	printf("\ncada aluno tera 4 notas \n");
	printf("\nO primeiro aluno é o aluno '0'-zero.\n");
	for (i=0;i<4;i+=1){
		for(j=0;j<4;j+=1){
			printf("\nDigite a nota do aluno %d:",i);
			scanf("%f",&notas[i][j]);
			media+=notas[i][j];
			medias[i]=media;
		}
	}
	for (int a=0;a<4;a+=1){
		printf("\nA media do aluno %i e': %.2f \n",a,medias[a]);
	}*/
	//OUTRO JEITO DE FAZER
	
	const int bimestres=4;
	const int alunos=4;
	float notas[alunos][bimestres]={0}; //atribuindo o valor de 0 para todos
	float medias[alunos]={0};
	float media=0;
	printf("\nInsira as 4 notas do aluno 1:\n");
	for(int a=0;a<alunos;a+=1){
		for(int n=0;n<bimestres;n+=1){
			scanf("%f",&notas[a][n]);
			media+=notas[a][n];
		}
		medias[a]=media/bimestres;
		media=0;
		printf("\nInsiras a 4 notas do aluno %i:\n",a+2);
	}
	for (int al=0;al<4;al+=1){
		printf("\nA NOTA DO ALUNO %i e':%.2f\n",al+1,medias[al]);
	}
	
	system("pause");
	return 0;
}
