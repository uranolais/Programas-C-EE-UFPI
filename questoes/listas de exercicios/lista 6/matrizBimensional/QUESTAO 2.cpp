/* 2. Imprimir os elementos da  área marcada do exercício 1 letra d, na ordem inversa, 
ou seja, de baixo  para cima e da direita para a esquerda.  */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
//#define TAM 120
/*void limparBuffer ()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}*/
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int matriz[5][5]={0,1,2,3,4,
			          1,2,3,4,5,
					  2,3,4,5,6,
					  3,4,5,6,7,
					  4,5,6,7,8};
	int c,d,f=4;
	printf("\nMatriz:\n");
	for(c=4;c>=0;c--){
		for(d=f;d>=0;d--){
			printf(" %i ",matriz[c][d]);
			
		}printf("\n");
		f--;
	}
	getchar();
	//system("pause");
	return 0;
}
