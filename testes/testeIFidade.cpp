#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade;
	printf("Informe a idade:");
	scanf("%i",&idade);
	
	if (idade<18){
		printf("Bebidas alcoolicas estão proibidas! \n");
	}else{
		printf("TA TUDO LIBERADO");
	}

	system("pause");
	return 0;
}
