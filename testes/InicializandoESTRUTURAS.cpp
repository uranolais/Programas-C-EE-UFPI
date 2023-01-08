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
	};//agora={10,20,30};
	
	struct horario agora;//={.segundos=30,.horas=10,.minutos=20};
	
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 30;
	
	printf("\n%i:%i:%i\n",agora.horas,
						  agora.minutos,
						  agora.segundos);
	
	system("pause");
	return 0;
}
