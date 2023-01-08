/*7.  Faça um algoritmo que leia um número e, caso ele seja positivo, calcule e mostre: 
?  O número digitado ao quadrado. 
?  A raiz quadrada do número digitado. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num,qdd;
	float raiz;
	printf("\nDigite um número qualquer:\n");
	scanf("%i",&num);
	if (num>=0){
		qdd=pow(num,2);
		raiz=(float)sqrt(num);
		printf("\nA raiz quadrada de %i é: %.2f\n",num,raiz);
		printf("\nO número %i elevado ao quadrado é: %i\n",num,qdd);
	}else{
		printf("\nNão há nada que se possa fazer pois o número é negativo\n");
	}
	
	getchar();
	//system("pause");
	return 0;
}
