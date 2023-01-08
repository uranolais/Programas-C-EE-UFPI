#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade;
	printf("Informe a idade:");
	scanf("%i",&idade);
	
	if (idade<=5)
		printf("Bebe \n");
	else if (idade>5 and idade<=10)
		printf("Criança \n");
	else if (idade>10 and idade<=18)
		printf("adolescente \n");
	else if (idade>18 and idade<=50)
		printf("Adulto \n");
	else
		printf("Idoso \n");
	system("pause");
	return 0;
}
