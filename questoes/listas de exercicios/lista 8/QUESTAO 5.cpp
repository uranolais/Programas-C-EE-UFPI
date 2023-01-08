/* 5)  Dado um conjunto com n elementos, chama-se arranjo simples de taxa k, a todo agrupamento de k elementos 
distintos dispostos numa certa ordem. Faça uma função para calcular o número total de arranjos de n elementos 
tomados k a k através da fórmula: 
A  n,k  = n! / (n-k)! 
Esta  função  deve  obrigatoriamente  chamar  uma  função  fatorial  implementada  por  você  com  o  seguinte 
protótipo: int fatotial (int n) 
       Escreva também o main para testar a função arranjo.   */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int n){
	int fat;
	if(n==0){
		fat=1;
	}else{
		fat=n*(fatorial(n-1));
	}
	return fat;
}
int main(int argc, char** argv)
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	int n,k,d;
	float a;	
	printf("\nDigite o valor de n: ");
	scanf("%i",&n);
	printf("\nDigite o valor de k: ");
	scanf("%i",&k);
	d=n-k;
	a=(float)(fatorial(n))/(fatorial(d));
	printf("\nO arranjo é: %.2f ",a);	
	
	getchar();
	return 0;
}
