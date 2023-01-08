/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAIOR(x,y) x>y? x:y
#define E_MINUSCULO(char) char>='a' && char<='z' 
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	char x = 'a';
	
	if(E_MINUSCULO(x)){
		printf("\né uma letra minuscula!");
	}else{
		printf("\n não é uma letra minuscula!");
	}
	printf("\n%i",MAIOR(10,50));
	getchar();
	//system("pause");
	return 0;
}
