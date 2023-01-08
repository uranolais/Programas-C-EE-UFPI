/*2 – Faça um  programa  que imprima  a frase  “Estudou  para a prova  de PE? <s  – sim,  n – não> ” O 
usuário  deve ser obrigado  a responder “s” ou “n”  e sempre que ele responder errado, a seguinte  frase 
deve ser impressa:  “Estudou  ou nao estudou? ”. No final  do programa,  deve ser impresso  “Muito  bem! 
Continue  estudando!”  se a resposta do usuário  for  “s”  e “Cuidado:  muitas  disciplinas  dependem  de 
PE! Ainda  ha tempo, ESTUDE!  ” se a resposta for “n”. 
Ex.: 
Estudou para a prova de PE?  <s – sim, n – não> t 
Estudou ou nao estudou? x 
Estudou ou nao estudou? m 
Estudou ou nao estudou? s 
Muito bem! Estude sempre! */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	char re;
	int i=0;
	printf("\nEstudou para a prova? Responda com 's' ou 'n': ");
	scanf("%c",&re);
	while(i!=-1){
		
		switch(re){
			case 's':
				printf("\nMuito bem! continue estudando.\n");
				i=-1;
				break;
			case 'S':
				printf("\nMuito bem! continue estudando.\n");
				i=-1;
				break;
			case 'n':
				printf("\nEstude! Ainda da tempo.\n");
				i=-1;
				break;
			case 'N':
				printf("\nEstude! Ainda da tempo.\n");
				i=-1;
				break;
			default:
				printf("\nEstudou ou não estudou?\n");
				i=0;
				scanf("%c",&re);
			
		}
	}
	
	
	getchar();
	//system("pause");
	return 0;
}
