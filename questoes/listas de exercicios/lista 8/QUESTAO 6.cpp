/* 6)  Escreva um programa que leia pares de valores positivos (use a fun��o leNaoNegativo). Imprima se os elementos 
de cada par s�o n�meros amigos (ou n�o). A leitura dos pares deve terminar quando o usu�rio digitar o par 0 e 0. 
Dois n�meros A e B s�o amigos se a soma dos divisores de A excluindo A � igual a B e a soma dos divisores de B 
excluindo B � igual a A. Para a verificar se dois n�meros s�o amigos utilize a fun��o saoAmigos. A fun��o saoAmigos 
deve usar a fun��o somaDivisores. 
Nome: leNaoNegativo 
Objetivo: Ler um valor n�o negativo. Se o n�mero for negativo, a leitura deve ser repetida at� que o valor lido seja 
zero ou positivo. 
Par�metros: Nenhum. 
Retorno: (int) o valor n�o negativo. 
 
Nome: saoAmigos 
Objetivo: verifica se dois n�meros n1 e n2 s�o amigos. 
Par�metros: (int,int) n1 e n2 (inteiros positivos). 
Retorno: (int) 1 se os dois n�meros s�o amigos, 0 caso contr�rio. 
Observa��o: Utilize a fun��o somaDividores 
Exemplo: 
220 e 284 s�o amigos, pois 
220: 1+2+4+5+10+11+20+22+44+55+110=284 
284: 1+2+4+71+142=220 
1184 e 1210 tamb�m s�o amigos. 
 
Nome: somaDivisores 
Objetivo: Calcula a soma dos divisores de um n�mero(exceto ele mesmo) n. 
Par�metros: O n�mero n (inteiro e positivo). 
Retorno: A soma dos divisores de n. 
Exemplo: Para o valor 8: 1+2+4 = 7 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int leNaoNegativo(int a){
	if(a<0){
		while(a<0){
			printf("\nO VALOR N�O PODE SER NEGATIVO\n");
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
			printf("\nOs n�meros %i e %i s�o amigos\n",a,b);
		}else if(saoAmigos(a,b)==2){
			printf("\nOs n�meros %i e %i n�o s�o amigos\n",a,b);
		}
		
	}while(a!=0 && b!=0);
	
	getchar();
	return 0;
}
