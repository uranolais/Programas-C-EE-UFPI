/*Escreva um programa que peça que o usuário digite dois números INTEIROS.
 O seu programa deve verificar se o primeiro número é divisível pelo segundo 
 e retornar na tela do usuário uma mensagem apropriada a verificação feita.*/
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
		printf("Não é possivel dividir o primeiro pelo segundo pois o segundo é nulo. \n");
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
