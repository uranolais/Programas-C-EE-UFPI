/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>
//#define TAM 120
struct dicionario{
	char palavra[20];
	char definicao[50];
};
bool compararStrings(const char palavra1[],const char palavra2[]){
	int i=0;
	while(palavra1[i]==palavra2[i]&& palavra1[i]!='\0' && palavra2[i]!='\0'){
		
		i++;
	}
	if (palavra1[i]=='\0' && palavra2[i]=='\0'){
		return true;
	}else{
		return false;
	}
}
int procurarStrings(const struct dicionario lingua[],const char procurar[],const int numDePalavras){
	bool compararStrings(const char palavra1[],const char palavra2[]);
	int i=0;
	while(i<numDePalavras){
		if(compararStrings(procurar,lingua[i].palavra)){
			return i;
		}else{
			i++;
		}
	}return -1;
}
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int procurarStrings(const struct dicionario lingua[],const char procurar[],const int numDePalavras);
	const int NUMERODEDEFINICOES=7;//coloca em maiusculo pra lembrar que é const
	char palavra[20]={'\0'};
	int resultadoPesquisa;
	const struct dicionario portugues[7]=
	{{"pao","comida de farinha"},
	 {"mortadela","comida industrializada"},
   	 {"a","primeira letra do alfabeto"},
   	 {"w","utilizada com o ctrl fecha o programa"},
	 {"arroz","sai bem com feijao"},
	 {"melancia","tipo de fruta"},
	 {"coragem","bravura"}};
	printf("\nDigite uma palavra: ");
	scanf("%s",&palavra);
	resultadoPesquisa=procurarStrings(portugues,palavra,7);
	if (resultadoPesquisa!=-1){
		printf("\n%s \n",portugues[resultadoPesquisa].definicao);
	}else{
		printf("\nPalavra não encontrada!\n");
	}printf("\n");
	
	getchar();
	//system("pause");
	return 0;
}
