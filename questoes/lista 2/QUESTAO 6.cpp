/*6.  Fa�a um algoritmo que leia o sal�rio de um trabalhador e o valor da presta��o de um 
empr�stimo. Se a presta��o: 
 For maior que 20% do sal�rio, imprima: �Empr�stimo n�o concedido.� 
 Caso contr�rio, imprima: �Empr�stimo concedido.� */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int sal,em;
	float vlr;
	printf("\nDigite o sal�rio do trabalhador: ");
	scanf("%i",&sal);
	printf("\nDigite o valor desejado do emprestimo: ");
	scanf("%i",&em);
	vlr=(float)(20*sal)/100;
	if(em>vlr){
		printf("\nEmpr�stimo n�o concedido\n");
	}else{
		printf("\nEmpr�stimo concedido\n");
	}
	getchar();
	//system("pause");
	return 0;
}
