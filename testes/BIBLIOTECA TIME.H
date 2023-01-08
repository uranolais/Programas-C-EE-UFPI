/* BIBLIOTECA TIME*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int i,vet[10],tempo,valor,a=0,p=0,logico;
	time_t tinicio,tfim; //variaveis do "tipo" tempo
	tinicio=time(NULL);
	printf("\n\nINÍCIO DO JOGO\n\n");
	do{
		srand(time(NULL)); //inicializa o gerador de números aleatorios
		for(i=0;i<10;i++){
			vet[i]=rand()%10+1;//gera numeros aleatorios de 1 a 10;
		}
		printf("\nEscolha um número de 1 a 10: ");
		scanf("%i",&valor);
		for(i=0;i<10;i++){//calcula quantas vezes aparece na sequencia
			if(valor==vet[i]){
				a++;
			}
		}if(a){
			printf("\nVocê marcou %i ponto(s)!\n",a);//é diferente de zero
		}else{
			printf("\nVocê não marcou pontos! O valor não está na sequência!\n");
		}
		printf("\nSEQUÊNCIA:\n");
		for(i=0;i<10;i++){
			printf("%d",vet[i]);
		}
		p+=a;//acumula os pontos
		a=0;//zera para o proximo jogo
		printf("\nDigite '0'(zero) para terminar, ou outro valor para continuar:");
		scanf("%i",&logico);
		
	}while(logico);
	system("cls");
	tfim=time(NULL);//marca o tempo final
	tempo=difftime(tfim,tinicio);//marca a diferença de tempo
	printf("\nFIM DO JOGO!\n");
	printf("\nTotal de pontos: %i",p);
	printf("\nTempo de jogo(em segundos): %i",tempo);
	getchar();
	//system("pause");
	return 0;
}
