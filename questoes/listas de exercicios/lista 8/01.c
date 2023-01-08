#include <stdio.h>

typedef struct
{
	int hora;
	int minuto;
	int segundo;
} horario;

int main()
{
	int calculaTempo(horario t);

	horario h;

	printf("Digite a duracao da prova no formato hh:min:seg: ");
	scanf("%d:%d:%d", &h.hora, &h.minuto, &h.segundo);
	printf("Duracao em segundos: %d", calculaTempo(h));
	return 0;
}

int calculaTempo(horario t)
{
	int tempo;
	tempo = t.hora * 3600 + t.minuto * 60 + t.segundo;
	return tempo;
}
