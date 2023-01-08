#include <stdio.h>

int main(int argc, char** argv)
{
	char str [10] = "Joao";
	
	printf("\nString: %s\n", str);
	printf("\nSegunda letra: %c\n", str[1]);
	str[1] = 'J';
	printf("\nAgora a segunda letra eh: %c\n", str[1]);
	printf("\nString resultante: %s\n", str);
	return 0;
}