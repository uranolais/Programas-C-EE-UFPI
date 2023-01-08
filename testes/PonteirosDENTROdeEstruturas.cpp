/*Estruturas que contem ponteiros*/
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
		int *phora;
		int *pmin;
		int *pseg;
	};
	struct horario hoje;
	int hora=200;
	int min=300;
	int seg=400;
	
	hoje.phora=&hora;
	hoje.pmin=&min;
	hoje.pseg=&seg;
	
	printf("Hora - %i\n",*hoje.phora);
	printf("Minuto - %i\n",*hoje.pmin);
	printf("Segundo - %i\n",*hoje.pseg);
	
	*hoje.pseg=1000;
	
	printf("Hora - %i\n",*hoje.phora);
	printf("Minuto - %i\n",*hoje.pmin);
	printf("Segundo - %i\n",*hoje.pseg);
	
	getchar();
	//system("pause");
	return 0;
}
