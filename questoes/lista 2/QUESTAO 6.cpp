/*6.  Faça um algoritmo que leia o salário de um trabalhador e o valor da prestação de um 
empréstimo. Se a prestação: 
 For maior que 20% do salário, imprima: “Empréstimo não concedido.” 
 Caso contrário, imprima: “Empréstimo concedido.” */
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
	printf("\nDigite o salário do trabalhador: ");
	scanf("%i",&sal);
	printf("\nDigite o valor desejado do emprestimo: ");
	scanf("%i",&em);
	vlr=(float)(20*sal)/100;
	if(em>vlr){
		printf("\nEmpréstimo não concedido\n");
	}else{
		printf("\nEmpréstimo concedido\n");
	}
	getchar();
	//system("pause");
	return 0;
}
