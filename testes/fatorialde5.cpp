#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num=5;
	int fat=1;
	for(;num>=1;--num){
		fat=num*fat;
	}
	/*while (num>=1){
		fat=num*fat;
		num-=1;
	}*/
	printf("o fatorial do numero 5 e': %i \n",fat);
	system("pause");
	return 0;
}
