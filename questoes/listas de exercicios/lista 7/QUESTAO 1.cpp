/*1) Seja uma estrutura para descrever os carros de uma determinada revendedora, contendo os seguintes 
campos:  
marca: cadeia de caracteres de tamanho 15  
ano: inteiro  
cor: cadeia de caracteres de tamanho 10  
pre�o: real 
a) Escrever a defini��o da estrutura carro.  
b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20. //VOU COLOCAR 5 S�
Crie um programa para:  
c) Ler o vetor vetcarros.  
d) Ler um pre�o e imprimir os carros (marca, cor e ano) que tenham pre�o igual ou menor ao pre�o recebido.  
e) Ler a marca de um carro e imprimir as informa��es de todos os carros dessa marca (pre�o, ano e cor).  
f) Ler uma marca, ano e cor e informar se existe ou n�o um carro com essas caracter�sticas. Se existir, 
informar o pre�o desses carros.  */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
void limparBuffer ()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	
	struct carro
	{
		char marca[15];
		int ano;
		char cor[10];
		float preco;
	};
	struct carro vetcarros[5];
	float pre;
	for(int i=0;i<5;i++){
		printf("\nDigite a marca do %io. carro:",i+1);
		scanf("%s",&vetcarros[i].marca);
		limparBuffer();
		printf("\nDigite o ano do %io. carro:",i+1);
		scanf("%i",&vetcarros[i].ano);
		printf("\nDigite a cor do %io. carro: ",i+1);
		scanf("%s",&vetcarros[i].cor);
		limparBuffer();
		printf("\nDigite o pre�o do %io. carro:",i+1);
		scanf("%f",&vetcarros[i].preco);
		system("cls");
		
	}
	system("pause");
	system("cls");
	printf("\nDigite um pre�o qualquer:");
	scanf("%f",&pre);
	int ctd=0;
	for(int i=0;i<5;i++){
		if(vetcarros[i].preco<=pre){
			ctd++;
			printf("\n\n\nCarro %i:\n",ctd);
			printf("\nMarca do carro: %s",vetcarros[i].marca);
			printf("\nCor do carro: %s",vetcarros[i].cor);
			printf("\nAno do carro: %i",vetcarros[i].ano);
			printf("\nPre�o do carro: %.2f",vetcarros[i].preco);
			
		}
	}if(ctd==0){
		printf("\nNenhum dos carros tem o pre�o inferior ou igual a %.2f\n",pre);
	}else{
			printf("\nTotal de carros com o pre�o igual ou inferior: %i\n",ctd);
		}
	system("pause");
	system("cls");
		
		
	char marc[20];
	int ctd2=0;	
    printf("\nDigite uma marca qualquer:");
    scanf("%s",&marc);
    limparBuffer();
    for(int i=0;i<5;i++){
		if(stricmp(marc,vetcarros[i].marca)==0){
			ctd2++;
			printf("\n\n\nCarro %i:\n",ctd);
			printf("\nMarca do carro: %s",vetcarros[i].marca);
			printf("\nCor do carro: %s",vetcarros[i].cor);
			printf("\nAno do carro: %i",vetcarros[i].ano);
			printf("\nPre�o do carro: %.2f",vetcarros[i].preco);
		}
	}if(ctd2==0){
		printf("\nN�o foi encontrado nenhum carro dessa marca no estoque.\n");
	}else{
		printf("\nForam encontrados o total de %i carros dessa marca.\n",ctd2);
	}
	system("pause");
	system("cls");
	char m[20],c[10];
	int a;
	printf("\nDigite uma marca:");
	scanf("%s",&m);
	limparBuffer();
	printf("\nDigite uma cor:");
	scanf("%s",&c);
	limparBuffer();
	printf("\nDigite um ano: ");
	scanf("%i",&a);
	for(int i=0;i<5;i++){
		if(stricmp(m,vetcarros[i].marca)==0 && stricmp(c,vetcarros[i].cor)==0 && (a==vetcarros[i].ano)){
			printf("\nEsse carro existe e seu pre�o �: %.2f\n",vetcarros[i].preco);
			break;
		}
	}
	
	
	printf("\n\n");
	getchar();
	//system("pause");
	return 0;
}
