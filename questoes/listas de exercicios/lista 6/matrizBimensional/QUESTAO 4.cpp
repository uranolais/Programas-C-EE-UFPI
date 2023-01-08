/* 4. A tabela abaixo contém vários itens que estão estocados em vários armazéns de 
uma  companhia.  É  fornecido,  também,  o  custo  de  cada  um  dos  produtos 
armazenados. Não é necessário validar a entrada de dados. 
 
(UNIDADES)PRODUTO 1 PRODUTO 2  PRODUTO 3 
ARMAZÉM 1  1200    	3700  		3737 
ARMAZEM 2  1400    	4210  		4224 
ARMAZEM 3  2000    	2240  		24444 
 
   	   	   PRODUTO 1  PRODUTO 2  PRODUTO 3 
CUSTO(R$)  260          420        330 

Faça um programa que: 
a)  Leia o estoque inicial; 
b)  Leia o custo de cada produto 
c)  Determine e imprima quantos itens estão armazenados em cada armazém 
d)  Calcule qual o custo total (R$) de: 
1.  Estoque em cada armazém 
2.  Cada produto em todos os armazéns  */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int matriz[3][3],custo[1][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nDigite a quantidade do produto %i no %io. armazem: ",j+1,i+1);
			scanf("%i",&matriz[i][j]);
		}
	}system("cls");
	for(i=0;i<1;i++){
		for(j=0;j<3;j++){
			printf("\nDigite o custo do produto %i:",j+1);
			scanf("%i",custo[i][j]);
		}
	}system("cls");
	int q1=0,q2=0,q3=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0){
				q1+=matriz[i][j];
			}else if(i==1){
				q2+=matriz[i][j];
			}else if(i==2){
				q3+=matriz[i][j];
			}
		}
	}
	printf("\nA quantidade de produtos no armazem 1 é: %i",q1);
	printf("\nA quantidade de produtos no armazem 2 é: %i",q2);
	printf("\nA quantidade de produtos no armazem 3 é: %i",q3);
	int c1=0,c2=0,c3=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0){
				c1+=(matriz[i][j]*custo[1][j]);
			}else if(i==1){
				c2+=(matriz[i][j]*custo[1][j]);
			}else if(i==2){
				c3+=(matriz[i][j]*custo[1][j]);
			}
		}
	}
	printf("\nO custo total dos produtos no armazem 1 é: %i",c1);
	printf("\nO custo total dos produtos no armazem 2 é: %i",c2);
	printf("\nO custo total dos produtos no armazem 3 é: %i",c3);
	getchar();
	//system("pause");
	return 0;
}
