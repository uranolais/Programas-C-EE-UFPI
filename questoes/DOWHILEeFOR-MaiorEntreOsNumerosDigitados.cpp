/*7.  Escreva  um  programa  onde  o  usu�rio  diz  quantos 
n�meros  quer  digitar,  em  seguida  solicite  a  ele  que 
digite todos os n�meros e diga qual o maior n�mero 
daqueles digitados.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int num=0,i=0,a=0,b=1,j=0,c=0;
	int vetor[100];
	printf("\nDigite quantos n�meros deseja digitar:\n");
	scanf("%i",&num);
	do{
		printf("Digite o %io. n�mero:",i+1);
		scanf("%i",&vetor[i]);
		i+=1;

	}while(i<num);
	for (a=0;a<=i;a++){
		for(b=a+1;b<=i;b++){
			if (vetor[a]>vetor[b]){
				j=vetor[a];
				vetor[a]=vetor[b];
				vetor[b]=j;
			}
		}
	}printf("\nO maior n�mero digitado �: %i\n",j);
	system("pause");
	return 0;
}
