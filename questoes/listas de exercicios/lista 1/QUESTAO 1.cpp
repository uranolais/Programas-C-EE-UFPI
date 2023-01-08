/*1) Crie um algoritmo que leia um número de 4 dígitos e imprima na sua forma invertida. 
Exemplo: 4356, será 6534. O número na entrada e saída de dados deve estar contido em 
apenas uma variável:  
scanf(“%d”, &NumeroInicial); 
printf(“%d”, NumeroFinal); */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	/*
	//Jeito 1:
	int num,rev;
	printf("\nDigite um número de 4 dígitos: ");
	scanf("%i",&num);
	printf("\n");
	do{
		rev=num%10;//é o resto
		printf("%i",rev);
		num=num/10;//ficar o número sem a virgula
	}while(num!=0);
	printf("\n");*/
	/*
	//Jeito 2:
	int num[4];
	printf("\n");
	printf("Digite 4 números:");
	for(int i=0;i<4;i++){
		printf("\nDigite o %io. número: ",i+1);
		scanf("%i",&num[i]);
	}printf("\nNúmero inicial: ");
	for(int i=0;i<4;i++){
		printf("%i",num[i]);
	}printf("\nNúmeroFinal: ");
	for(int j=3;j>=0;j--){
		printf("%i",num[j]);
	}*/
	/**/
	//Jeito 3:
	char num[4];
	printf("\n");
	printf("Digite um número de 4 digitos:");
	gets(num);
	printf("\nNúmero inicial: ");
	puts(num);
	printf("\nNúmeroFinal:");
	strrev(num);
	puts(num);
	/**/
	getchar();
	//system("pause");
	return 0;
}
