/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	struct horario
	{
		int horas;
		int minutos;
		int segundos;
	};
	
	struct horario agora[5];
	for (int i=0;i<5;i++){
		printf("\nDigite horas, minutos e segundos:\n");
		scanf("%i %i %i",&agora[i].horas,&agora[i].minutos,&agora[i].segundos);
	}system("cls");
	
	/*agora[0].horas = 15;
	agora[0].minutos = 17;
	agora[0].segundos = 30;*/
	
	for(int i=0;i<5;i++){
		printf("\n%i:%i:%i\n",agora[i].horas,
						  agora[i].minutos,
						  agora[i].segundos);
	};
	
	system("pause");
	return 0;
}
