/* 6)  Escreva um programa que leia pares de valores positivos (use a função leNaoNegativo). Imprima se os elementos 
de cada par são números amigos (ou não). A leitura dos pares deve terminar quando o usuário digitar o par 0 e 0. 
Dois números A e B são amigos se a soma dos divisores de A excluindo A é igual a B e a soma dos divisores de B 
excluindo B é igual a A. Para a verificar se dois números são amigos utilize a função saoAmigos. A função saoAmigos 
deve usar a função somaDivisores. 
Nome: leNaoNegativo 
Objetivo: Ler um valor não negativo. Se o número for negativo, a leitura deve ser repetida até que o valor lido seja 
zero ou positivo. 
Parâmetros: Nenhum. 
Retorno: (int) o valor não negativo. 
 
Nome: saoAmigos 
Objetivo: verifica se dois números n1 e n2 são amigos. 
Parâmetros: (int,int) n1 e n2 (inteiros positivos). 
Retorno: (int) 1 se os dois números são amigos, 0 caso contrário. 
Observação: Utilize a função somaDividores 
Exemplo: 
220 e 284 são amigos, pois 
220: 1+2+4+5+10+11+20+22+44+55+110=284 
284: 1+2+4+71+142=220 
1184 e 1210 também são amigos. 
 
Nome: somaDivisores 
Objetivo: Calcula a soma dos divisores de um número(exceto ele mesmo) n. 
Parâmetros: O número n (inteiro e positivo). 
Retorno: A soma dos divisores de n. 
Exemplo: Para o valor 8: 1+2+4 = 7 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int leNaoNegativo(int a){
	if(a<0){
		while(a<0){
			printf("\nO VALOR NÃO PODE SER NEGATIVO\n");
			printf("\nDigite o valor de novo: ");
			scanf("%i",&a);	
		}
		
	}
	return a;
}
int somaDivisores(int a){
	int i,soma=0;
	for(i=1; i<a; i++){
		if(a%i==0){
			soma+=i;
		}
	}
	return soma;
}
int saoAmigos(int a, int b){
	if(somaDivisores(a)==b && somaDivisores(b)==a){
		return 1;
	}else{
		return 2;
	}
}
int main(int argc, char** argv)
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int a,b;
	do{
		printf("\nDigite o valor de a: ");
		scanf("%i",&a);
		a=leNaoNegativo(a);
		printf("\nDigite o valor de b: ");
		scanf("%i",&b);
		b=leNaoNegativo(b);
		if(saoAmigos(a,b)==1){
			printf("\nOs números %i e %i são amigos\n",a,b);
		}else if(saoAmigos(a,b)==2){
			printf("\nOs números %i e %i não são amigos\n",a,b);
		}
		
	}while(a!=0 && b!=0);
	
	getchar();
	return 0;
}
