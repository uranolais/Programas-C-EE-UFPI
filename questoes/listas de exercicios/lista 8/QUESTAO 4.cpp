/* 4)  Escreva  uma  função  que  imprima  todos  os  números  perfeitos  existentes  entre  dois  números,  chamada 
imprimePerfeitos.  Observe que essa função deve imprimir um número apenas se ele for perfeito. Para descobrir 
se um número é perfeito você pode chamar a função ehPerfeito implementada por você. A função ehPerfeito 
retorna 1 se o número é perfeito e 0 caso contrário. Lembre-se, um número é dito perfeito quando ele é igual a 
soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores).   */
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
	printf("\nDigite um número inteiro qualquer diferente de zero:");
	scanf("%i",&n);
	if(n<0){
		n=n*(-1);
	}
	if(ehPerfeito(n)==0){
		printf("\nNão é perfeito.\n");
	}else if(ehPerfeito(n)==1){
		printf("\nÉ perfeito.\n");
	}
	getchar();
	//system("pause");
	return 0;
}
