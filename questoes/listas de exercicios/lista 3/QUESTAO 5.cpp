/*5. Uma turma possui n alunos. O número de alunos deve ser fornecido pelo usuário. O
programa deve ler a média de cada aluno (obrigue que o valor da média esteja entre 0 e
10 inclusive) e imprimir o total de alunos com média superior a 7*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int al,med,soma=0;
	printf("\nDigite a quantidade de alunos: ");
	scanf("%i",&al);
	for(int i=0;i<al;i++){
		printf("\nDigite a nota o %io. aluno:",i+1);
		scanf("%i",&med);
		if (med<0 || med>10){
			printf("\nInformação errada!\n");
			i--;
		}else if (med>=7 && med<=10){
			soma+=1;
		}else if(med<7 && med>=0){
			continue;
		}
		med=0;
	}printf("\nO total de alunos com media superior ou igual a 7 é: %i\n",soma);
	
	getchar();
	//system("pause");
	return 0;
}
