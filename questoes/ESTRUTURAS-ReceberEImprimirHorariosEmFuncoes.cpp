/* Crie um programa que possui uma fun��o que recebe
como argumento um vetor de tamanho 5 de tipo estrutura 
sendo que essa estrutura deve armazenar um determinado 
hor�rio no formato hh:mm:ss, pe�a que o usu�rio digite
5 hor�rios diversos que dever�o ser armazendos no argumento
recebido. Crie uma segunda fun��o que receber� este msmo
vetor estrutura mas dessa vez a fun��o dever� apenas ler os 
valores armazendos no vetor estrtura mostrando uma mensagem apropriada.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define TAM 120
struct horario{
		int horas;
		int minutos;
		int segundos;
};
struct horario v[5];
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("\n\n*=*=*=*=*=*=*=*=*=* HOR�RIOS NO FORMATO HH:MM:SS *=*=*=*=*=*=*=*=*=*\n\n");
	void recebe(struct horario vetor[5]);
	void imprime(struct horario vetor[5]);
	recebe(v);
	imprime(v);
	system("pause");
	return 0;
}
void recebe(struct horario vetor[5]){
	for(int i = 0;i<5;i++){
		printf("\n\nDigite o %io. hor�rio(HH:MM:SS):",i+1);
		scanf("%i %i %i",&vetor[i].horas,&vetor[i].minutos,&vetor[i].segundos);
	}
	
}
void imprime(struct horario vetor[5]){
	for(int i=0;i<5;i++){
		printf("\n\n%io. hor�rio = %i:%i:%i ",i+1,vetor[i]);
	}
}

