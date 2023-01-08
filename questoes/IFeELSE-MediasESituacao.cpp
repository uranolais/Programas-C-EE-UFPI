/*Faça um programa que receba as 3 notas de um aluno
e calcule a média final, mostrando ainda o resultado,
seguindo a seguinte regra: se a média for maior ou igual
seguindo a seguinte regra: se a média for maior ou igual
a 7, APROVADO; se a média for maior ou igual a 4 e
menor que 7, PROVA FINAL; se a média for menor que
4, REPROVADO.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,c,media;
	printf("\nDigite as 3 notas do aluno:\n");
	scanf("%f %f %f",&a,&b,&c);
	media=(a+b+c)/3;
	if (media<4){
		printf("\nREPROVADO!\nSuas notas: %.2f %.2f %.2f\nSua Media: %.2f\n",a,b,c,media);
	}else if(media>=4 && media<7){
		printf("\nPROVA FINAL!\nSuas notas: %.2f %.2f %.2f\nSua Media: %.2f\n",a,b,c,media);
	}else if(media>=7 and media<=10){
		printf("\nAPROVADO!\nSuas notas: %.2f %.2f %.2f\nSua Media: %.2f\n",a,b,c,media);
	}else{
		printf("\nSituacao Desconhecida\n");
	}
	system("pause");
	return 0;
}
