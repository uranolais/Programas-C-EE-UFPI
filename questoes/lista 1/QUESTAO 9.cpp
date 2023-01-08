/*9.  A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, 
sendo que: 
  O primeiro ganhador receberá 46% do total. 
  O segundo receberá 32% do total. 
  O terceiro receberá o restante. 
Crie  um  algoritmo  que  calcule  e  imprima  a  quantia  recebida  por  cada  um  dos 
ganhadores. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	float g1,g2,g3;
	g1=(46*780000.0)/100.0;
	g2=(32*780000.0)/100.0;
	g3=780000.0-g1-g2;
	printf("O primeiro ganhador levou: %.2f\n"
			"O segundo ganhador levou: %.2f\n"
			"O terceiro ganhador levou: %.2f\n",g1,g2,g3);
	printf("\n");
	getchar();
	//system("pause");
	return 0;
}
