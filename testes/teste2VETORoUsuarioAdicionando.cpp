/**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade[5];
	for(int i=0; i<5; i++){
		printf("Digite a %da. idade \n", i+1);
		scanf("%i",&idade[i]);
	}
	printf("Idades:");
	for(int i=0;i<5;i++){
		printf("%i \n", idade[i]);
	}
	system("pause");
	return 0;
}
