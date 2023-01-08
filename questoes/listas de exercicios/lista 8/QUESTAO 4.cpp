/* 4)  Escreva  uma  fun��o  que  imprima  todos  os  n�meros  perfeitos  existentes  entre  dois  n�meros,  chamada 
imprimePerfeitos.  Observe que essa fun��o deve imprimir um n�mero apenas se ele for perfeito. Para descobrir 
se um n�mero � perfeito voc� pode chamar a fun��o ehPerfeito implementada por voc�. A fun��o ehPerfeito 
retorna 1 se o n�mero � perfeito e 0 caso contr�rio. Lembre-se, um n�mero � dito perfeito quando ele � igual a 
soma dos seus divisores excetuando ele pr�prio. (Ex: 6 � perfeito, 6 = 1 + 2 + 3, que s�o seus divisores).   */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int ehPerfeito(int n){
	int soma=0,i;
	for(i=1;i<n;i++){
		if(n%i==0){
			soma+=i;
		}
	}
	if(soma==n){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	printf("\nDigite um n�mero inteiro qualquer diferente de zero:");
	scanf("%i",&n);
	if(n<0){
		n=n*(-1);
	}
	if(ehPerfeito(n)==0){
		printf("\nN�o � perfeito.\n");
	}else if(ehPerfeito(n)==1){
		printf("\n� perfeito.\n");
	}
	getchar();
	//system("pause");
	return 0;
}
