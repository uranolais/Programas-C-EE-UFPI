/*1) Crie um algoritmo que leia um n�mero de 4 d�gitos e imprima na sua forma invertida. 
Exemplo: 4356, ser� 6534. O n�mero na entrada e sa�da de dados deve estar contido em 
apenas uma vari�vel:  
scanf(�%d�, &NumeroInicial); 
printf(�%d�, NumeroFinal); */
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
	printf("\nDigite um n�mero de 4 d�gitos: ");
	scanf("%i",&num);
	printf("\n");
	do{
		rev=num%10;//� o resto
		printf("%i",rev);
		num=num/10;//ficar o n�mero sem a virgula
	}while(num!=0);
	printf("\n");*/
	/*
	//Jeito 2:
	int num[4];
	printf("\n");
	printf("Digite 4 n�meros:");
	for(int i=0;i<4;i++){
		printf("\nDigite o %io. n�mero: ",i+1);
		scanf("%i",&num[i]);
	}printf("\nN�mero inicial: ");
	for(int i=0;i<4;i++){
		printf("%i",num[i]);
	}printf("\nN�meroFinal: ");
	for(int j=3;j>=0;j--){
		printf("%i",num[j]);
	}*/
	/**/
	//Jeito 3:
	char num[4];
	printf("\n");
	printf("Digite um n�mero de 4 digitos:");
	gets(num);
	printf("\nN�mero inicial: ");
	puts(num);
	printf("\nN�meroFinal:");
	strrev(num);
	puts(num);
	/**/
	getchar();
	//system("pause");
	return 0;
}
