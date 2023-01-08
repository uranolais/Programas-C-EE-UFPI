/**/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	for(int i=1;i<=10;++i){//o ++i conta como i=i+1 ou i+=1
		printf("**Volta %i**\n",i);
		for(int j=1; j<=10;++j){
			printf("Ponto %i \n",j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
