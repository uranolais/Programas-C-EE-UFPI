#include <stdio.h>

typedef struct
{
	int hora;
	int minuto;
} horario;

int main()
{
	int duracao(horario ini, horario fin);

	horario h;
	horario j;
	printf("Digite a duracao do jogo no formato hh:mim ");
	printf("\nHORA INICIAL: ");
	scanf("%d:%d", &h.hora, &h.minuto);
	printf("HORA FINAL: ");
	scanf("%d:%d", &j.hora, &j.minuto);

	printf("Duracao em minutos: %d", duracao(h, j));
	return 0;
}

int duracao(horario ini, horario fin)
{
	int tempI;
	int tempF;
	int tempo;

	if (ini.hora > fin.hora)
	{
		tempI = (60 * (24 - ini.hora)) + ini.minuto;
		tempF = 60 * fin.hora + fin.minuto;
		tempo = tempF + tempI;
	}
	else if (ini.hora < fin.hora)
	{
		tempI = 60 * ini.hora + ini.minuto;
		tempF = 60 * fin.hora + fin.minuto;
		tempo = tempF - tempI;
	}
	else if ((ini.hora == fin.hora) && (ini.minuto == fin.minuto))
		tempo = 24 * 60;

	return tempo;
}
