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
	file=fopen("testea.txt","r");
	char x[20],y[20];
	fscanf(file,"%s %s",&x,&y);
	printf("%s %s",x,y);
	fclose(file);
	getchar();
	//system("pause");
	return 0;
}