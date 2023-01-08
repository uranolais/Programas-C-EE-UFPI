/*PONTEIROS À ESTRUTURAS
OPERAÇOES MATEMATICAS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	struct horario{
		int hora;
		int minuto;
		int segundo;	
	};
	
	struct horario agora, *depois;
	depois =&agora;
	depois->hora=20;
	depois->minuto=20;
	depois->segundo=20;
	/*(*depois).hora=20;
	(*depois).minuto=20;
	(*depois).segundo=20;*/
	printf("\n%i:%i:%i\n",agora.hora,agora.minuto,agora.segundo);
	int somatorio=100;
	struct horario antes;
	antes.hora= somatorio + depois->segundo;
	antes.minuto= agora.hora + depois->minuto;
	antes.segundo= depois->minuto + depois->segundo;
	printf("\n%i:%i:%i\n",antes.hora,antes.minuto,antes.segundo);
	
	getchar();
	//system("pause");
	return 0;
}
