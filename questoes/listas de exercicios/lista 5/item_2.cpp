#include <stdio.h>
int main(int argc, char** argv)
{
int number, x=1, numberOdd=1, numberPair=0, count=0;

while (x<=10)
	{
	x++;
	scanf("%d", &number);
	if(number%2!=0)
		{
		count++;
		numberOdd = numberOdd*number;
		}
	else if (number%2==0) 
		numberPair=numberPair+number;
	}
	 if (count==0)
	printf("Multiplication of odd = 0");
	else
	printf("Multiplication of odd = %d\n", numberOdd);
	
	printf("Sum of Number Pairs = %d\n", numberPair);
	return 0;
}