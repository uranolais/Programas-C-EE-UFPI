/*Fa�a um programa que leia dois valores reais (float) do
teclado e calcule a divis�o entre eles. Se o segundo for zero
imprima (DIVIS�O POR ZERO) .*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,di;
	printf("\nDigite dois numeros reais(um sera o numerador e o outro denominador):");
	scanf("%f %f",&a,&b);
	if (b==0){
		printf("\nERRO! NAO E' POSSIVEL FAZER DIVISAO POR ZERO\n");
	}else if(b!=0){
		di=a/b;
		printf("\nA divisao do numerador %.2f pelo denomidador %.2f e': %.2f \n",a,b,di);
	}
	
	system("pause");
	return 0;
}
