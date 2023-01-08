#include<stdio.h>
#include <math.h>
int main()
{
int soma,number,div,rest,exp;
for (number=1000; number<=9999; number++)
	{ 
		div=number/100;
		rest=number%100;
		soma=div+rest;
		exp=pow(soma,2);
		if(number-exp==0)
		printf("numeros = %d\n", exp);
	}
return 0;
}