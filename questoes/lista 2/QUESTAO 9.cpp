/*9.  Faça  um  algoritmo  que,  dada  a  idade  de  um  nadador, 
classifique-o  em  uma  das seguintes categorias: 
Categoria  Idade 
Infantil A  5-7 
Infantil B  8-10 
Juvenil A  11-13 Juvenil B  14-17 
Sênior  maiores de 18 anos*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int idade;
	printf("\nDigite a idade do nadador: ");
	scanf("%i",&idade);
	if(idade>=5 && idade<=7){
		printf("\nINFANTIL 'A'\n");
	}else if(idade>=8 && idade<=10){
		printf("\nINFANTIL 'B'\n");
	}else if(idade>=11 && idade<=13){
		printf("\nJUVENIL 'A'\n");
	}else if(idade>=14 && idade<=17){
		printf("\nJUVENIL 'B'\n");
	}
	
	
	
	getchar();
	//system("pause");
	return 0;
}
