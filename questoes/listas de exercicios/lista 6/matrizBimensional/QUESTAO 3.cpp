/* O QUE O PROGRAMA ABAIXO VAI IMPRIMIR?*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int t, i, M[3][4]; 
	for (t=0; t<3; ++t) 
	   for (i=0; i<4; ++i) 
	      M[t][i] = (t*4)+i+1; 
	 
	for (t=0; t<3; ++t) 
	   { 
	   for (i=0; i<4; ++i) 
	       printf ("%3d ", M[t][i]); 
	   printf ("\n"); 
	   } 
	
	/*resposta:
	esse programa imprime uma matriz 3x4 que vai ser os 12 (depois do 0) primeiros n�meros:
	1 2 3 4
	5 6 7 8
	9 10 11 12*/   
	getchar();
	return 0;
}
