/*1)  Defina o tipo horario, com os campos hora, minuto e segundo. Fa�a uma fun��o que recebe por par�metro o tempo 
de dura��o de uma prova e retorna o mesmo tempo em segundos. 
int calculaTempo(horario t);  */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
	int horas;
	int minutos;
	int segundos;
}horario;
int seg(horario now){
	int s;
	s=(now.horas*3600)+(now.minutos*60)+now.segundos;
	return s;
	
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	horario agora;
	printf("\nDigite um horario hh:mm:ss >>");
	scanf("%i:%i:%i",&agora.horas,&agora.minutos,&agora.segundos);
	printf("\nO tempo em segundos �: %i",seg(agora));
	getchar();
	//system("pause");
	return 0;
}
