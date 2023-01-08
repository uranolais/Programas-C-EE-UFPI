// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int square (int x){
printf("o quadrado eh %d", (x*x));
return(0);
}

int main(int argc, char** argv)
{
	int num;
	
	printf("Entre com um numero:\n");
	scanf("%d", &num);
	printf("\n\n");
	square(num);
	printf("\n\n");
	return 0;
}


