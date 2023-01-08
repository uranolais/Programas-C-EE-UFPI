/*2) Receba do usu�rio um m�s (1 a 12) e um ano, imprima na tela o n�mero de dias do m�s, 
atente ao ano bissexto em que o m�s de fevereiro tem 29 dias. Uma maneira de identificar se o 
ano � bissexto, � verificar se o mesmo � m�ltiplo de 4, caso seja, ent�o o ano � bissexto, h� 
algumas exce��es, se o ano termina em 00, ou seja , divis�vel por 100, � necess�rio verificar se 
o ano � m�ltiplo de 400. 
Exemplo: Ano 2000 �m�ltiplo de 4, termina em 00 e � m�ltiplo de 400, ent�o � 
bissexto. 
      Ano 1900 � m�ltiplo de 4, termina em 00 e n�o � m�ltiplo de 400, 
ent�o n�o � bissexto. 
*Caso o valor n�o seja o correspondente ao de algum m�s, imprima uma mensagem 
de erro na tela. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int mes,ano;
	printf("\nDigite um ano: ");
	scanf("%i",&ano);
	printf("\nDigite um m�s: ");
	scanf("%i",&mes);
	if(mes>=1 && mes<=12){
		if (ano%4!=0){
			if(mes==1){
				printf("\nJaneiro de um ano n�o bissexto: 31 dias");
			}
			if(mes==2){
				printf("\nFevereiro de um ano n�o bissexto: 29 dias");
			}
			if(mes==3){
				printf("\nMar�o de um ano n�o bissexto: 31 dias");
			}
			if(mes==4){
				printf("\nAbril de um ano n�o bissexto: 30 dias");
			}
			if(mes==5){
				printf("\nMaio de um ano n�o bissexto: 31 dias");
			}
			if(mes==6){
				printf("\nJunho de um ano n�o bissexto: 30 dias");
			}
			if(mes==7){
				printf("\nJulho de um ano n�o bissexto: 31 dias");
			}
			if(mes==8){
				printf("\nAgosto de um ano n�o bissexto: 31 dias");
			}
			if(mes==9){
				printf("\nSetembro de um ano n�o bissexto: 30 dias");
			}
			if(mes==10){
				printf("\nOutubro de um ano n�o bissexto: 31 dias");
			}
			if(mes==11){
				printf("\nNovembro de um ano n�o bissexto: 30 dias");
			}
			if(mes==12){
				printf("\nDezembro de um ano n�o bissexto: 31 dias");
			}
			printf("\n\n");
		}else if(ano%4==0){
			if(mes==1){
				printf("\nJaneiro de um ano bissexto: 31 dias");
			}
			if(mes==2){
				printf("\nFevereiro de um ano bissexto: 28 dias");
			}
			if(mes==3){
				printf("\nMar�o de um ano bissexto: 31 dias");
			}
			if(mes==4){
				printf("\nAbril de um ano bissexto: 30 dias");
			}
			if(mes==5){
				printf("\nMaio de um ano bissexto: 31 dias");
			}
			if(mes==6){
				printf("\nJunho de um ano bissexto: 30 dias");
			}
			if(mes==7){
				printf("\nJulho de um ano bissexto: 31 dias");
			}
			if(mes==8){
				printf("\nAgosto de um ano bissexto: 31 dias");
			}
			if(mes==9){
				printf("\nSetembro de um ano bissexto: 30 dias");
			}
			if(mes==10){
				printf("\nOutubro de um ano bissexto: 31 dias");
			}
			if(mes==11){
				printf("\nNovembro de um ano bissexto: 30 dias");
			}
			if(mes==12){
				printf("\nDezembro de um ano bissexto: 31 dias");
			}
			printf("\n\n");
		}
		
	}else{
		printf("\nM�S INV�LIDO!\n");
	}
	
	getchar();
	//system("pause");
	return 0;
}
