/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	//DEFININDO A ESTRUTURA-É O ESQUELETO, AINDA NAO ESTÁ DECLARADA.
	struct horario
	{
		int horas;
		int minutos;
		int segundos;
		//float 
		double teste;
		char letra;
	};
	//DECLARANDO UMA ESTRUTURA:
	struct horario agora;
	
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 30;
	
	//DANDO PRINTF
	printf("\nRELÓGIO - %i:%i:%i\n",agora.horas,agora.minutos,agora.segundos);
	
	//DECLARANDO OUTRA ESTRUTURA
	struct horario depois;
	depois.horas = agora.horas+10;
	depois.minutos = agora.minutos;
	depois.segundos = agora.segundos/10;
	depois.teste = 50.55/23;
	depois.letra = 'a';
	
	printf("\n %i\n",depois.horas);
	printf("\n %i\n",depois.minutos);
	printf("\n %i\n",depois.segundos);
	printf("\n %f\n",depois.teste);
	printf("\n %c\n",depois.letra);
	system("pause");
	return 0;
}
