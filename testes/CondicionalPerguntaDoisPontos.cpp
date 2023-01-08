#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1;
	int n2;
	int resposta;
	
	n1<n2 ? printf("sim"):printf("nao");//caso for TRUE printa sim caso for FALSE vai pra outra condicao e printa nao
	n1<n2 ? resposta = 10 : resposta = -10;
	printf("%i",resposta);

	system("pause");
	return 0;
}
