/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	printf("\nOlá Mundo!\n");
	system("pause");
	system("cls");//Colocar depois do system("pause"); pq senao vai limpar antes de ver o print direito
	printf("\nSua tela foi limpa\n");
	//system("pause");
	return 0;
}
