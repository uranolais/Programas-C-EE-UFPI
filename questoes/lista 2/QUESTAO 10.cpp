/*10. Fa�a um algoritmo que leia a altura e o peso de uma pessoa. De acordo com a tabela 
a seguir, verifique e mostre qual a classifica��o dessa pessoa. 
 Altura 
Peso 
At� 60  Entre 60-90  Acima de 90 
Menor do que 1.20  A  D  G 
1.20-1.70  B  E  H 
Maior do que 1.70  C  F  I */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	float h,p;
	printf("\nDigite a altura: ");
	scanf("%f",&h);
	printf("\nDigite o peso: ");
	scanf("%f",&p);
	if (h<1.2){
		if(p<60.0){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'A'\n");
		}else if(p<=60.0 && p<=90.0){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'B\n");
		}else if(p>90){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'C'\n");
		}
	}
	if (h>=1.2 && h<=1.7){
		if(p<60.0){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'E'\n");
		}else if(p<=60.0 && p<=90.0){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'F\n");
		}else if(p>90.0){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'G'\n");
		}
	}
	if (h>1.7){
		if(p<60.0){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'H'\n");
		}else if(p<=60.0 && p<=90.0){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'I\n");
		}else if(p>90.0){
			printf("\nSeu peso: %.2f\nSua altura: %.2f",p,h);
			printf("\nClassifica��o:'J'\n");
		}
	}
	
	getchar();
	//system("pause");
	return 0;
}
