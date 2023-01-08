/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	float somadedigitos(float x,float y);
	float n1,n2,soma;
	printf("\nDigite dois números: \n");
	scanf("%f %f",&n1,&n2);
	soma=somadedigitos(n1,n2);
	printf("\nA soma absoluta é: %2.f\n",soma);
	system("pause");
	return 0;
}
float somadedigitos(float x,float y){
	
	float valorabsoluto(float x);
	if (x<0){
		x=valorabsoluto(x);
	}
	if (y<0){
		y=valorabsoluto(y);
	}
	return (x+y);
	
}
float valorabsoluto(float a){
	return (a*-1);
}
