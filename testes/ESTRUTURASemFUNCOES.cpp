/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#define TAM 120
struct horario//global
	{
		int horas;
		int minutos;
		int segundos;
	};
struct horario teste(struct horario x);
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	struct horario agora;
	
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 30;
	
	struct horario proxima;
	proxima=teste(agora);
	
	printf("\nFORA DA FUNÇÃO\n");
	printf("\n\n%i:%i:%i\n\n",proxima.horas,proxima.minutos,proxima.segundos);
	
	system("pause");
	return 0;
}
struct horario teste(struct horario x){
	printf("\nDENTRO DA FUNÇÃO:\n");
	printf("\n\n%i:%i:%i\n\n",x.horas,x.minutos,x.segundos);
	x.horas=100;
	x.minutos=100;
	x.segundos=100;
	return x;
}
