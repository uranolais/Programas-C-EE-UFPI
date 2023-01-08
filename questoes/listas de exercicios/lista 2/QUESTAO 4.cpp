/*4  – Faça  um  programa  que  pergunta  ao  usuário  um  número  de 1  a  10 e  imprime  a tabuada  de 
multiplicação  desse  número.  Depois  da  impressão,  o  usuário  deve  ser  questionado  se  ele  deseja 
imprimir  outra  tabuada  (<1>  - Sim,  <outro  valor>  - Nao). Caso a reposta  seja sim,  tudo  deve  ser 
realizado  novamente,  caso contrário,  o programa  termina. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	printf("\n\n*=*=*=*=*=*=*=*=*=* TABUADA *=*=*=*=*=*=*=*=*=*\n\n");
	int i=0,n1,n2;
	printf("\nDigite um número: ");
	scanf("%i",&n1);
	printf("\n");
	while(i!=-1){
		for (int a=1;a<11;a++){
			printf(" %i ",n1*a);
		}printf("\n");
		printf("\nDeseja ver a tabuada de outro número?");
		printf("\nDigite '1' para SIM e '2' para NÃO!: ");
		scanf("%i",&n2);
		if (n2==1){
			n1=0;
			printf("\nDigite o número: ");
			scanf("%i",&n1);
			continue;
		}else if(n2==2){
			printf("\nObrigada pela participação!\n");
			i=-1;
			continue;
		}
	}
	
	getchar();
	//system("pause");
	return 0;
}
