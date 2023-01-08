/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int contarStrings(char string[]);
	char string[20];
	printf("\nDigite sua string:\n");
	scanf("%s",&string);//programa vai automaticamente colocar o \0 no final
	int n = contarStrings(string);
	printf("\nA sua palavra tem %i caracteres!\n",n);
	
	
	system("pause");
	return 0;
}
int contarStrings(char string[]){
	int num=0;
	while(string[num]!='\0'){
		num++;
	}
	int a=num+1;//cnsiderar o \0
	printf("\nA sua string tem %i caracteres!\n",a);
	return num;
}
