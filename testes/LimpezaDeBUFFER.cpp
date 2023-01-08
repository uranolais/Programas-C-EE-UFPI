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

	//Jeito 1: fflush(stdin);
	//NAO FUNCIONA
	
	/*char a,b,c;
	a=getchar();
	fflush(stdout);
	b=getchar();
	fflush(stdout);
	b=getchar();
	fflush(stdout);
	*/
	
	//Jeito 2: setbuf(stdin,NULL)
	//funciona:
	
	/*char a,b,c;
	a=getchar();
	setbuf(stdin,NULL);
	b=getchar();
	setbuf(stdin,NULL);
	c=getchar();
	setbuf(stdin,NULL);*/
	
	//JEITO 3: CRIANDO A PROPRIA FUNCAO
	void limparBuffer ();
	/*char a,b,c;
	a=getchar();
	limparBuffer();
	b=getchar();
	limparBuffer();
	c=getchar();
	limparBuffer();*/
	
	printf("%c",a);
	printf("%c",b);
	printf("%c",c);
	
	getchar();
	//system("pause");
	return 0;
}
void limparBuffer ()
{
	char c;
	while((c=getchar())!='\n' && c!=EOF);
}