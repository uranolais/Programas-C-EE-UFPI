#include <stdio.h>



int main()
{  
	float area(float b,float a);
	float perimetro(float b,float a);
	float a,b,p,A;
	printf("Digite a base e a altura do retangulo: ");
	scanf("%f %f",&b,&a);
	A=area(b,a);
	p=perimetro(b,a);
	printf("\n AREA: %.2f\nPERIMETRO: %.2f",A,p);

	return 0;
}
float area(float b,float a)
{
	float A;
	A=b*a;
	return A;
}
float perimetro(float b,float a)
{
	float p;
	p=(b*2)+(a*2);
	return p;
}