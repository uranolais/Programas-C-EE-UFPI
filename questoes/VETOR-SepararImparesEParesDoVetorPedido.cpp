/*6. Faça um programa que receba dez números
inteiros e armazene-os em um vetor. O
programa deve calcular e mostrar dois vetores
resultantes, sendo o primeiro com os números
pares e o segundo com os números ímpares do
vetor lido.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	system("color 1F");
	setlocale(LC_ALL,"PORTUGUESE");
	int v[10];
	int i;
	int ctd1=0,ctd2=0;
	int v1[10],v2[10];
	for(i=0;i<10;i++){
		printf("\nDigite o %io. número(de 10):\n",i+1);
		scanf("%i",&v[i]);
	}
	
	int k=0;
	for (k=0;k<10;k++){
		if (v[k]%2==0){
			v[k]=v1[ctd1];
			ctd1++;
		}
	}if(ctd1!=0){
		for(int a=0;a<=ctd1;a++){
			printf("\n%i é par\n",v1[a]);
		}
	}
	int w=0;
	for (w=0;w<10;w++){
		if (v[w]%2!=0){
			v[w]=v2[ctd2];
			ctd2++;
		}
	}if(ctd2!=0){
		for(int b=0;b<=ctd2;b++){
			printf("\n%i é impar\n",v2[b]);
		}
	}
	system("pause");
	return 0;
}

