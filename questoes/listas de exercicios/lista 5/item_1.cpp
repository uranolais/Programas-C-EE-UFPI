#include <stdio.h>
int main()
{
	double num1=0, num2=1, newNumber, x;
	printf("%.0lf\n", num1);
	printf("%.0lf\n", num2);
	printf("%.0lf\n", num1+num2);
for (x=3; x<=100; x++)
	{
	newNumber=num1+num2;
	num1=num2;
	num2=newNumber;
	printf("%.0lf\n", num1+num2);
	}
return 0;
}