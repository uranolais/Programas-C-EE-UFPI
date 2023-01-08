/* Imprimir os números inteiros ímpares de 1 a 50*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	printf("Os numeros impares de 1 'a 50 sao:\n");
	for (i=1;i<=50;i=i+2){
		printf("%i\n",i);
	}
	system("pause");
	return 0;
}
