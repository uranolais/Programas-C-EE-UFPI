/*Escreva um programa que pe�a que o usu�rio digite dois n�meros INTEIROS.
 O seu programa deve verificar se o primeiro n�mero � divis�vel pelo segundo 
 e retornar na tela do usu�rio uma mensagem apropriada a verifica��o feita.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int d;
	int m;
	int di;
	printf("Digite dois numeros:");
	scanf("%i %i",&d,&m);
	if (m==0)
		printf("N�o � possivel dividir o primeiro pelo segundo pois o segundo � nulo. \n");
	else{
		if (d % m == 0){
			di=d/m;
			printf("o %i e' divisivel por %i. Valor da divisao: %i \n",d,m,di);
		}
		else{
			printf("o %i nao e' divisivel por %i. \n",d,m);
		}
	}
		

	system("pause");
	return 0;
}
