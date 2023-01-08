/* 5)  Dado um conjunto com n elementos, chama-se arranjo simples de taxa k, a todo agrupamento de k elementos 
distintos dispostos numa certa ordem. Fa�a uma fun��o para calcular o n�mero total de arranjos de n elementos 
tomados k a k atrav�s da f�rmula: 
A  n,k  = n! / (n-k)! 
Esta  fun��o  deve  obrigatoriamente  chamar  uma  fun��o  fatorial  implementada  por  voc�  com  o  seguinte 
prot�tipo: int fatotial (int n) 
       Escreva tamb�m o main para testar a fun��o arranjo.   */
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
	printf("\nO arranjo �: %.2f ",a);	
	
	getchar();
	return 0;
}
