/*1 – P ergunte  ao usuário  quantas vezes ele deseja que seja impresso  a frase:  "ESTUDE!".  A frase deve 
ser repetida tantas vezes,  quanto foi  a escolha  do usuário,  precedida por uma  numeração  iniciada  por 
1. Exemplo:  Caso o usuário  escolheu  a quantidade  3, deve ser impresso: 
1 – ESTUDE! 
2 – ESTUDE! 
3 – ESTUDE! */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	printf("\nDigite quantas vezes deseja repetir a frase: ");
	scanf("%i",&n);
	for(int i=0;i<n;i++){
		printf("\n%i- ESTUDE!",i+1);
	}printf("\n");
	
	getchar();
	//system("pause");
	return 0;
}
