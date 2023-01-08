/* 2)  Defina o tipo horario, com os campos hora e minuto.  Fa�a uma fun��o que recebe, por par�metro, o hor�rio de 
in�cio e o hor�rio de t�rmino de um jogo, ambos subdivididos em 2 valores distintos: horas e minutos. A fun��o 
deve retornar a dura��o do jogo em minutos, considerando que o tempo m�ximo de dura��o de um jogo � de 24 
horas e que o jogo pode come�ar em um dia e terminar no outro. 
int duracao(horario ini, horario fin) */ //1440 minutos � o maximo;
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct 
{
	int minutos;
	int horas;
}horario;

int duracao(horario ini, horario final){
	int tempo,m1,m2;
	m1=(ini.minutos)+(60*ini.horas);
	m2=(final.minutos)+(60*final.horas);
	if(m2==m1){
		tempo=1440;
	}else{
		tempo=m2-m1;
	}
	if (tempo<=1440){
		return tempo;
	}else{
		return 0;
	}
}

int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	horario ini,final;
	printf("\nDigite a hora inicial: ");
	scanf("%i",&ini.horas);
	printf("\nDigite o minuto inicial: ");
	scanf("%i",&ini.minutos);
	printf("\nDigite a hora final: ");
	scanf("%i",&final.horas);
	printf("\nDigite o minuto final: ");
	scanf("%i",&final.minutos);
	
	if(duracao(ini,final)==0){
		printf("Execedeu o tempo!");
	}else{
		printf("\nA dura��o foi: %i minutos",duracao(ini,final));
	}
	
	
	getchar();
	//system("pause");
	return 0;
}
