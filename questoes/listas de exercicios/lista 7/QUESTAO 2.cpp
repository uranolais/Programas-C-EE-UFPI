/* 2) Elaborar um algoritmo que auxilie no controle de uma fazenda de gado que possuí um total de 2000 
cabeças  de  gado.  A  base  de  dados  é  formada  por  um  conjunto  de  estruturas  (registros)  contendo  os 
seguintes campos referente a cada cabeça de gado:  //VOU COLOCAR SÓ 5 GADOS
?  código: código da cabeça de gado,  
?  leite: número de litros de leite produzido por semana,  
?  alim: quantidade de alimento ingerida por semana - em quilos,  
?  nasc: data de nascimento - mês e ano,  
?  abate: ‘N" (não) ou ‘S’ (sim).  
O campo nasc. é do tipo struct data que por sua vez, possui dois campos:  
o  mês  
o  ano  
Faça um programa para: 
a) Ler a base de dados (código, leite, alim, nasc.mês e nasc.ano), armazenado em um vetor de estruturas.  
b) Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso:  
?  tenha mais de 5 anos, ou;  
?  produza menos de 40 litros de leite por semana, ou;  
?  produza entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de alimento por dia.  
c) Informar a quantidade total de leite produzida por semana na fazenda. 
d) Informar a quantidade total de alimento consumido por semana na fazenda.  
e) Informar a quantidade total de leite que vai ser produzido por semana na fazenda, após o abate  
f) Informar a quantidade total de alimento que vai ser consumido por semana na fazenda, após o abate  
g) Informar o número de cabeças de gado que iram para o abate.  */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
/*void limparBuffer ()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}*/
struct nasci
{
	int mes;
	int ano;
};
struct gados
{
	struct nasci data;
	int codigo;
	float leite;
	float ali;
	float alisem;
	char abate;
};
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	struct gados gado[5];
	int i;
	float tl=0.0,ta=0.0;
	for(i=0;i<5;i++){
		printf("\nDigite o código do %io. gado: ",i+1);
		scanf("%i",&gado[i].codigo);
		printf("\nDigite o mês de nascimento do %io. gado:",i+1);
		scanf("%i",&gado[i].data.mes);
		printf("\nDigite o ano de nascimento do %io. gado:",i+1);
		scanf("%i",&gado[i].data.ano);
		printf("\nDigite a quantidade de leite(EM L) que %io. gado produz POR SEMANA: ",i+1);
		scanf("%f",&gado[i].leite);
		tl+=gado[i].leite;
		printf("\nDigite a quantidade de alimento(EM KG) que o gado ingere por dia:");
		scanf("%f",&gado[i].ali);
		gado[i].alisem=(gado[i].ali)*7;
		ta+=gado[i].alisem;
		system("cls");
	}
	printf("\n\n*=*=* ANTES DO ABATE *=*=*\n\n");
	printf("\nO total de alimento ingerido por semana é: %.2fKG",ta);
	printf("\nO total de leite produzido por semana é: %.2fL",tl);
	system("pause");
	system("cls");
	int anoatual,di;
	printf("\nDigite o ano atual:");
	scanf("%i",&anoatual);
	
	int ctd=0;
	for(i=0;i<5;i++){
		di=(anoatual)-(gado[i].data.ano);
		if(di>5)
		{
			ctd++;
			printf("\nO gado de código %i irá para o abate pois tem mais de 5 anos!\n",gado[i].codigo);
			ta-=gado[i].alisem;
			tl-=gado[i].leite;
		}else if(gado[i].leite<40){
			ctd++;
			printf("\nO gado de código %i irá para o abate pois produz menos de 40L de leite por semana!\n",gado[i].codigo);
			ta-=gado[i].alisem;
			tl-=gado[i].leite;
		}else if((gado[i].leite)<=70 && (gado[i].leite>=50) && (gado[i].ali>50)){
			ctd++;
			printf("\nO gado de código %i irá para o abate pois come mais do que produz!\n",gado[i].codigo);
			ta-=gado[i].alisem;
			tl-=gado[i].leite;
		}
		printf("\n");
	}
	if(ctd==0){
		printf("\nNenhum gado vai para o abate essa semana!\n");
	}else{
		printf("\n\n*=*=* DEPOIS DO ABATE *=*=*\n\n");
		printf("\nQuantidade de gatos que vão para o abate: %i",ctd);
		printf("\nO total de alimento ingerido por semana é: %.2fKG",ta);
		printf("\nO total de leite produzido por semana é: %.2fL",tl);
	}	
	getchar();
	return 0;
}
