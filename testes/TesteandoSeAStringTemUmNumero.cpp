/*a...z0123456789(...)*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	void alfabetico(char variavel);
	char nome[20];
	printf("\nDigite uma palavra: \n");
	gets(nome);
	int i=0;
	while(nome[i]!='\0'){
		alfabetico(nome[i]);
		i++;
	}
	
	system("pause");
	return 0;
}
void alfabetico(char variavel){
	if((variavel>='a')&& (variavel<='z') ||
	 (variavel>='A') && (variavel<='Z')){
		printf("\nÉ uma letra\n");
	}else{
		printf("\nNão é uma letra\n");
	}
}
