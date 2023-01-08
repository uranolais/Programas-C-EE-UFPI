#include<stdio.h>
int main()
{
	int Dias;
	float Anos;
	printf("A quantidade de dias:");
	scanf("%d",&Dias);
	Anos=Dias/365.25;
	printf("\n\n%d dias equivalem a %f anos",Dias,Anos);
	return 0;
	
}
