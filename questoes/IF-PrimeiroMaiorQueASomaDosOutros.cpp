/*Faça um programa que leia três valores do teclado e
verifique se o primeiro é maior que a soma dos outros
dois.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,soma;
	printf("\nDigite tres numeros:\n");
	scanf("%i %i %i",&a,&b,&c);
	soma=b+c;
	if (a>soma){
		printf("\nO numero %i e' maior que a soma dos numeros %i e %i. Sua soma e': %i \n",a,b,c,soma);
	}else if(a==soma){
		printf("\nO numero %i e' igual que a soma dos numeros %i e %i. Sua soma e': %i \n",a,b,c,soma);
	}else if (a<soma){
		printf("\nO numero %i e' menor que a soma dos numeros %i e %i. Sua soma e': %i \n",a,b,c,soma);
	}
	
	system("pause");
	return 0;
}
