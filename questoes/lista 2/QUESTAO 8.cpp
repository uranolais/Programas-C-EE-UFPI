/*8.  Faça um algoritmo que receba a altura e o sexo de uma pessoa e calcule e mostre 
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura): 
?  Homens: (72,7 * h) – 58 
?  Mulheres: (62,1 * h) – 44,7 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	float altura,peso,sexo;
	printf("\nDigite seu sexo(1 para masculino e 2 para feminino): ");
	scanf("%f",&sexo);
	printf("\nDigite sua altura:");
	scanf("%f",&altura);
	if(sexo==1){
		peso=(72.7*altura)-58.0;
		printf("\nVOCÊ É HOMEM\n");
		printf("\nSeu peso ideal é: %.2f\n",peso);
	}else if(sexo==2){
		peso=(62.1*altura)-44.7;
		printf("\nVOCÊ É MULHER\n");
		printf("\nSeu peso ideal é: %.2f\n",peso);
	}else{
		printf("\nSITUAÇÃO DESCONHECIDA\n");
	}
	getchar();
	//system("pause");
	return 0;
}
