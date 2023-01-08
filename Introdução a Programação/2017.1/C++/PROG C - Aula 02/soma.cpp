#include <stdio.h>

int soma(int x, int y){
	return(x+y);
}

int main(int argc, char** argv)
{
	int saida;
	saida=soma(12,7);
	printf("A saida eh: %d\n", saida);
	return 0;
}