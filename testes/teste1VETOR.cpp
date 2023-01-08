/**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int idade[3];
	idade[0]=24;
	idade[1]=20;
	idade[2]=12;
	printf("Idades:");
	for (int i=0;i<3;i++){
		printf("%d \n",idade[i]);
	}
	system("pause");
	return 0;
}
