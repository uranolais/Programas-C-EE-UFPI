/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14
#define DOIS_PI 2*PI
#define AREA_CIRCULO(raio) raio*raio*PI
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	printf("%f\n",PI);
	printf("%f\n",DOIS_PI);
	printf("%f\n",AREA_CIRCULO(10)); 
	
	getchar();
	//system("pause");
	return 0;
}
