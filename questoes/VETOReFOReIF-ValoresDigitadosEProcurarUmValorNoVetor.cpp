/*8. Faça um programa que leia um vetor de 10 elementos.
Logo em seguida leia um valor a ser encontrado nesse
vetor. Pesquise o valor no vetor e retorne a posição
onde valor está localizado Se não for encontrado
escreva a mensagem: valor não encontrado.
• Vetor: [10, 8, 4, 2, 7, 12, 19, 21, 37, 18]
• Valor a ser procurado: 18
• Resultado: Encontrado na posição: 9.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int vetor[10],valor,i,j,k;
	for(i=0;i<10;i++){
		printf("\nDigite o %io. valor:",i+1);
		scanf("%i",&vetor[i]);
	}
	system("cls");
	printf("\nDigite o valor que você deseja encontrar:");
	scanf("%i",&valor);
	for(j=0;j<10;j++){
		if (valor==vetor[j]){
			printf("\nValor encontrado na posição %i\n",j);
			break;
		}if (j==9 && valor!=vetor[j]){
			printf("\nVALOR NÃO ENCONTRADO\n");
		}
	}
	
	
	system("pause");
	return 0;
}
