/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
void copiarString(char *copiarDaqui, char *colarAqui){
	while(*copiarDaqui!='\0')
	{
		*colarAqui=*copiarDaqui;
		++copiarDaqui;
		++colarAqui;
	}
	*colarAqui='\0';//tem que adiconar o caractere nulo
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	void copiarString(char *copiarDaqui, char *colarAqui);
	char string1[]="pao com mortadela";
	char string2[20];
	copiarString(string1,string2);
	printf("%s\n",string2);
	
	getchar();
	//system("pause");
	return 0;
}