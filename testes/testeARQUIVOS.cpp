/* */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	FILE *file;
	//file=fopen("C:\\Users\\La�s Urano\\Documents\\Engenharia Eletrica\\PRIMEIRO PERIODO\\programa�ao\\linguagem c\\testearquivos.txt","w");
	file=fopen("testea.txt","w");
	fprintf(file,"ola mundo");
	fclose(file);
	getchar();
	//system("pause");
	return 0;
}
