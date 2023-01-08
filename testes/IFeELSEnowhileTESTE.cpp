//ANALISE DE BEBIDAS POR IDADE
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade;
	int i;
	while (i!=-1){
		printf("PRESSIONE -1 PARA SAIR \n");
		printf("Digite a idade: \n");
		scanf("%i",&idade);
		if (idade<18)
			printf("Bebidas alcoolicas estao proibidas! \n");
		else if (idade>=18)
			printf("Voce esta livre para beber de acordo com a lei. \n");		
	}
		else if (idade=-1){
			break;
		}
	printf("Obrigada por participar");
	system("pause");
	return 0;
}
