/*2) Receba do usuário um mês (1 a 12) e um ano, imprima na tela o número de dias do mês, 
atente ao ano bissexto em que o mês de fevereiro tem 29 dias. Uma maneira de identificar se o 
ano é bissexto, é verificar se o mesmo é múltiplo de 4, caso seja, então o ano é bissexto, há 
algumas exceções, se o ano termina em 00, ou seja , divisível por 100, é necessário verificar se 
o ano é múltiplo de 400. 
Exemplo: Ano 2000 –múltiplo de 4, termina em 00 e é múltiplo de 400, então é 
bissexto. 
      Ano 1900 – múltiplo de 4, termina em 00 e não é múltiplo de 400, 
então não é bissexto. 
*Caso o valor não seja o correspondente ao de algum mês, imprima uma mensagem 
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
	printf("\nDigite um mês: ");
	scanf("%i",&mes);
	if(mes>=1 && mes<=12){
		if (ano%4!=0){
			if(mes==1){
				printf("\nJaneiro de um ano não bissexto: 31 dias");
			}
			if(mes==2){
				printf("\nFevereiro de um ano não bissexto: 29 dias");
			}
			if(mes==3){
				printf("\nMarço de um ano não bissexto: 31 dias");
			}
			if(mes==4){
				printf("\nAbril de um ano não bissexto: 30 dias");
			}
			if(mes==5){
				printf("\nMaio de um ano não bissexto: 31 dias");
			}
			if(mes==6){
				printf("\nJunho de um ano não bissexto: 30 dias");
			}
			if(mes==7){
				printf("\nJulho de um ano não bissexto: 31 dias");
			}
			if(mes==8){
				printf("\nAgosto de um ano não bissexto: 31 dias");
			}
			if(mes==9){
				printf("\nSetembro de um ano não bissexto: 30 dias");
			}
			if(mes==10){
				printf("\nOutubro de um ano não bissexto: 31 dias");
			}
			if(mes==11){
				printf("\nNovembro de um ano não bissexto: 30 dias");
			}
			if(mes==12){
				printf("\nDezembro de um ano não bissexto: 31 dias");
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
				printf("\nMarço de um ano bissexto: 31 dias");
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
		printf("\nMÊS INVÁLIDO!\n");
	}
	
	getchar();
	//system("pause");
	return 0;
}
