/*7.  Fa�a um algoritmo que leia um n�mero e, caso ele seja positivo, calcule e mostre: 
?  O n�mero digitado ao quadrado. 
?  A raiz quadrada do n�mero digitado. */
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
	printf("\nDigite um n�mero qualquer:\n");
	scanf("%i",&num);
	if (num>=0){
		qdd=pow(num,2);
		raiz=(float)sqrt(num);
		printf("\nA raiz quadrada de %i �: %.2f\n",num,raiz);
		printf("\nO n�mero %i elevado ao quadrado �: %i\n",num,qdd);
	}else{
		printf("\nN�o h� nada que se possa fazer pois o n�mero � negativo\n");
	}
	
	getchar();
	//system("pause");
	return 0;
}
