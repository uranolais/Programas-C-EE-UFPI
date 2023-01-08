/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159
#define NULO 0
double areaCirculo(double raio){
	return raio*raio*PI;
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	double raio;
	double areaCirculo(double raio);
	
	int i=3;
	while(i!=NULO){
		printf("\nDigite o valor do raio: ");
		scanf("%lf",&raio);
		printf("\nA area do circulo é: %.2lf",areaCirculo(raio));
		--i;
	}
	
	getchar();
	//system("pause");
	return 0;
}