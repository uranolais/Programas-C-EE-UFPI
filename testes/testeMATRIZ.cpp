#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int matriz[3][3]; //matriz 3X3
	int i,j;
	printf("Digite os valores a seguir:\n\n");
	for(i=0;i<3;i++){

		for (j=0;j<3;j++){
			printf("\nElemento [%d][%d]:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("\n\n**********SAIDA DE DADOS***********\n\n");
	for(i=0;i<3;i++)
		for (j=0;j<3;j++){
			printf("\nElemento [%d][%d]: %d \n",i,j,matriz[i][j]);
		}
	getch();
	system("pause");
	return 0;
}
