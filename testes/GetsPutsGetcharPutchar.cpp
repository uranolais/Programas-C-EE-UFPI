/* */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	//funcao gets e fgets
	
	/*char x[20];
	char y[20];
	
	fgets(x,20,stdin);
	fgets(y,20,stdin);
	printf("\n%s",&x);
	printf("\n%s",y);*/
	
	//funcao puts - ela ja automaticamente coloca o \n;
	
	/*char x[]="nfiuefncm";
	puts(x);
	puts("Mortadela");*/
	
	//funcao getchar 
	
	/*char x[10];
	x[0]=getchar();
	printf("%c",x[0]);
	
	int i=0;
	while((x[i]=getchar())!='\n' &i<8){
		++i;
	}
	x[++i]='\0'; \\escrevendo o caractere nulo
	printf("%s",x);*/
	
	//funcao putchar 
	
	/*char x;
	int i=0;
	while((x=getchar())!='\n')
	{
		putchar(x);
	}*/

	
	//LIMPEZA DE BUFFER
	getchar();
	//system("pause");
	return 0;
}
/*void limparBuffer ()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}*/