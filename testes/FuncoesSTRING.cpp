/*FUNÇÕES DAS STRINGS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	char f1[50],f2[50],f3[100]={},c;//tem que dizer que o f3 é vazio
	int t1,t2,i,j,k,c1,c2;
	printf("\nDigite uma frase: ");
	fgets(f1,50,stdin);// é o gets com a opção de dizer o 'tamanho maximo' da frase
	printf("\nDigite outra frase: ");
	fgets(f2,50,stdin);
	t1=strlen(f1);//lendo o tamanho da frase
	t2=strlen(f2);
	printf("\nDigite uma letra:");
	scanf("%c",&c);
	c1=c2=0;
	system("cls");
	printf("\nPrimeira frase(original):");
	puts(f1);//colocando a string na tela
	printf("\nSegunda frase(original):");
	puts(f2);
	printf("\nCaractere digitado: %c",c);
	for(i=0;i<=t1;i++){
		if(f1[i]==c){
			c1++;
		}
	}
	for(j=0;j<=t2;j++){
		if(f2[j]==c){
			c2++;
		}
	}
	printf("\nA letra %c aparece %i vez(es) na primeira e %i vez(es) na segunda frase.\n",c,c1,c2);
	if(!strcmp(f1,f2)){//Comparando a igualdade das frases
		printf("\nAS FRASES SÃO IGUAIS\n");
	}else{
		strcat(f3,f1);//colocando a f1 no final da frase dois, modificando ela
		strcat(f3," ");
		strcat(f3,f2);
		printf("\nAs duas frases juntas: ");
		puts(f3);
		if(strchr(f3,'i')){//vendo se tem um determinado caractere na frase
			printf("\nA letra 'i' aparece na frase");
		}
		if (strstr(f3,"string")){//vendo se tem uma determinada string na frase
			printf("\nA palavra 'string' aparece na frase");
		}
		printf("\nA frase reversa: ");
		strrev(f3);//colocando a frase reversa
		puts(f3);
	}
	system("pause");
	return 0;
}
