/*4. O n�mero 3025 possui a seguinte caracter�stica: 30 + 25 = 55   -> 55*55 = 3025.
Fazer   um   programa   para   obter   todos   os   n�meros   de   4   algarismos   com   a   mesma
caracter�stica do n�mero 3025.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//#define TAM 120
int main()
{
	system("color 3F");
	setlocale(LC_ALL,"PORTUGUESE");
	int n,na,n1,n2,n3,i=1,a;
	//JEITO 1:
	printf("\nDigite um n�mero inteiro de 4 algarismos:");
	scanf("%i",&n);
	if(n>=1000 && n<=9999){
		do{
			n1=n%100;
			na=n/100;
			n2=n1+na;
			n3=n2*n2;
			if(n3==n){
				printf("\nO n�mero %i possui a caracteristica.\n",n);
			}else if(n3!=n){
				printf("\nO n�mero %i n�o possui a caracteristica.\n",n);
			}
			printf("\nDeseja continuar? <1> para sim e <2> para n�o: ");
			scanf("%i",&a);
			if(a==1){
				n=0;
				n1=0;
				n2=0;
				na=0;
				n3=0;
				printf("\nDigite um n�mero inteiro de 4 algarismos:");
				scanf("%i",&n);
				continue;
			}else if(a==2){
				printf("\nObrigada pela participa��o!\n");
				i=2;
			}else{
				printf("\nINFORMA��O ERRADA!\n");
			}
			
		}while(i!=2);
	}else{
		printf("\nINFORMA��O ERRADA!\n");
	}
	
	//JEITO 2 PARA TODOS OS NUMEROS;
	printf("\nTODOS OS N�MEROS:\n");
	for(n=1000;n<=9999;n++){
		n1=n%100;
		na=n/100;
		n2=n1+na;
		n3=n2*n2;
		if(n3==n){
			printf(" %i ",n);
		}
	}printf("\n");
	
	getchar();
	//system("pause");
	return 0;
}
