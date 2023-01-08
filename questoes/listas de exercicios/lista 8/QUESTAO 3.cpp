/* 3)  Faça  uma  função  que  recebe  como  parâmetro  um valor  n,
inteiro  e  positivo, calcule  e  retorne o  resultado  da 
seguinte soma: 
S = 1 - 1/2 + 1/3 -1/4 +... + 1/n */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float somar(int n){
	int i;
	float soma=0;
	for(i=1;i<=n;i++){
		if(i%2==0){
			soma-=(1.0/i);
		}else{
			soma+=(1.0/i);
		}
	}
	return soma;
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n;
	printf("\nDigite um número inteiro qualquer:");
	scanf("%i",&n);
	printf("\nA soma é: %.2f",somar(n));
	getchar();
	//system("pause");
	return 0;
}
