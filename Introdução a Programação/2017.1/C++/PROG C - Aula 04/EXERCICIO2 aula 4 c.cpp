/*Faça um programa que leia um número e informe se
ele é igual ao seu dia de nascimento. Imprimir
“NÚMERO CORRETO” se for igual e imprimir
“NÚMERO INCORRETO”, caso contrário.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>



int main(int argc, char** argv)
{
	int data, dia, num;
	
	printf("Digite sua data de nacimento no formato DDMMAA: \n");
	scanf("%i", &data);
	
	dia = data/10000;
	
	printf("Digite um numero inteiro qualquer: \n");
	scanf("%i", &num);

	if (data > 311217){
    printf("\nVoce digitou uma data no futuro\n DIGITE NOVAMENTE ! \n");
	}	

	else{

if (num<31){
	
if (dia==num) {
printf("\nVoce digitou exatamente o dia do seu nascimento bb :*\n");
}

 else {
	printf("\nVoce digitou o numero %i que nao foi o dia em que voce nasceu\n", num);
	}
}

else{
		printf("\n COM CERTEZA voce nasceu dia %i! Vai cassaar uma rola porra.", num);
}


return 0;

}
}