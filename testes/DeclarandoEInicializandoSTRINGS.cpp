/*FORMAS DE ESCREVER/DETERMINAR UMA STRING */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	char palavra[7]={'b','r','a','s','i','l','\0'};//TEM QUE COLOCAR O CARACTERE NULO
	//char palavra[]={'b','r','a','s','i','l','\0'};
	//char palavra[7]={"BRASIL"};
	//char palavra[]={"BRASIL"};
	//char palavra[7]="BRASIL";
	//char palavra[]="BRASIL";
	printf("\n %s \n",palavra);
	system("pause");
	return 0;
}
