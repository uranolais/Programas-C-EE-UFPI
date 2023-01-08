// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>

int main(int argc, char** argv)
{
	int num, i;
	int fat = 1;
	i=1;
	
	printf("\nDigite um numero inteiro:\n");
	scanf("%i", &num);

	while (i<=num){
		
		fat = fat * i;
		i++;
		
	}

	printf("%i\n", fat);
	
	return 0;
}

