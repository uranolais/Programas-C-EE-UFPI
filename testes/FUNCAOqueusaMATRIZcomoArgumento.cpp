/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	void funcaoPrint(int x[][3]);
	int matriz[3][3]={1,2,3,4,5,6,7,8,9};
	funcaoPrint(matriz);
	system("pause");
	return 0;
}
void funcaoPrint(int x[][3]){//ou x[3][3], mas o segundo tem que ter
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i ",x[i][j]);
		}printf("\n");
	}printf("\n");
}
