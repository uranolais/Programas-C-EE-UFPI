/*VARIAVEL BOOLEANA
0-FALSE
1-TRUE*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	_Bool stringsIguais(char s1[],char s2[]); 
	if(stringsIguais("casa","casa")==1){
		printf("\nSão iguais.\n");
	}else{
		printf("\nNão são iguais.\n");
	}
	
	system("pause");
	return 0;
}
_Bool stringsIguais(char s1[],char s2[]{
	int i=0;
	while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0'){
		++i;
		
	}
	if(s1[i]=='\0' && s2[i]=='\0'){
		return 1;
	}else{
		return 0;
	}
}
