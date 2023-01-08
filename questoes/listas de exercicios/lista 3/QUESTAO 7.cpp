/*7 – 40 alunos fizeram a 1º prova de PE. A professora deseja saber algumas informações
sobre o desempenho dos alunos. Faça um programa que auxilie à professora obter essas
informações.
a)   Quantos   notas   foram  maiores   ou   igual  a  7  e  que  porcentagem   de  alunos  essa
quantidade representa? 
b) Quantos notas foram entre maior ou igual a 4 e menores que 7 e que porcentagem de
alunos essa quantidade representa?
c) Quantas notas foram menores que 4 e que porcentagem de alunos essa quantidade
representa?
c) Qual a maior nota?
d) Qual o menor nota?
e) Qual a média das notas?
f) Qual a média das notas maiores que 7?*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	double notas[40],ma7=0.0,cma7=0.0,me7=0.0,cme7=0.0,me4=0.0,cme4=0.0;
	double pma7,pme7,pme4,maior=0.0,menor=10.0,soma=0,mtotal,m7;
	for(int i=0;i<40;i++){
		printf("\nDigite a nota do %io. aluno: ",i+1);
		scanf("%lf",&notas[i]);
		if (notas[i]<0.0 && notas[i]>10.0){
			printf("\nInformação errada!\n");
			i--;
		}else if(notas[i]>=0.0 && notas[i]<=10.0){
			if (notas[i]>=7.0){
				cma7+=1;
				ma7+=notas[i];
			}else if (notas[i]>=4.0 && notas[i]<7){
				cme7+=1;
				me7+=notas[i];
			}else if (notas[i]<4.0){
				cme4+=1;
				me4+=notas[i];
			}
		}else{
			printf("\nInformação errada!\n");
			i--;
		}
		//system("cls");
	}
	m7=ma7/cma7;
	pma7=(cma7*100.0)/40.0;
	pme7=(cme7*100.0)/40.0;
	pme4=(cme4*100.0)/40.0;
	soma=(ma7+me7+me4);
	mtotal=soma/40.0;
	printf("\nA quantidade de alunos com média>=7 é: %.2lf.",cma7);
	printf(" Essa quantidade corresponde a %.2lf porcento dos alunos.\n",pma7);
	printf("\nA quantidade de alunos com média<7 e média>=4 é: %.2lf.",cme7);
	printf(" Essa quantidade corresponde a %.2lf porcento dos alunos.\n",pme7);
	printf("\nA quantidade de alunos com média<4 é: %.2lf.",cme4);
	printf(" Essa quantidade corresponde a %.2lf porcento dos alunos.\n",pme4);
	
	printf("\nA media total é: %.2lf",mtotal);
	printf("\nA media dos alunos com notas>=7 é: %.2lf",m7);
	
	int a,b,c,d;
	for (a=0;a<40;a++){
		 b=a+1;
		 if (notas[a]>notas[b]){
		 	
		 	if(maior<notas[a]){
				maior=notas[a]; 
			 }
			 
		 }else if(notas[a]<=notas[b]){
			 
			 if(maior<notas[b]){
				 maior=notas[b];
			 }
		 }
	}
	for (c=0;c<40;c++){
		 d=c+1;
		 if (notas[c]<notas[d]){
		 	
		 	if(menor>notas[c]){
				menor=notas[c]; 
			 }
			 
		 }else if(notas[c]>=notas[d]){
			 
			 if(menor>notas[d]){
				 menor=notas[d];
			 }
		 }
	}
	
	printf("\nA menor nota foi: %.2lf",menor);
	printf("\nA maior nota foi: %.2lf",maior);
	getchar();
	//system("pause");
	return 0;
}
