/*Faça um programa que receba as 3 notas de um aluno
e calcule a média final, mostrando ainda o resultado,
seguindo a seguinte regra: se a média for maior ou igual
a 7, APROVADO; se a média for maior ou igual a 4 e
menor que 7, PROVA FINAL; se a média for menor que
4, REPROVADO.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float n1,n2,n3,media;
	printf("Digite a primeira nota:");
	scanf("%f",&n1);
	printf("Digite a segunda nota:");
	scanf("%f",&n2);
	printf("Digite a terceira nota:");
	scanf("%f",&n3);
	media = (n1+n2+n3)/3;
	if (media>=7){
		printf("Voce foi aprovado, sua media: %.2f \n",media);
	}else if(media<7 and media>=4){
		printf("Voce esta' de prova final, sua media: %.2f \n",media);
	}else if (media<4 and media>=0){
		printf("Voce foi reprovado, sua media: %.2f \n",media);
	}
	system("pause");
	return 0;
}
