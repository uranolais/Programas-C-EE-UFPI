/*Faça um programa que receba as 3 notas de um aluno
e calcule a média final, mostrando ainda o resultado,
seguindo a seguinte regra: se a média for maior ou igual
a 7, APROVADO; se a média for maior ou igual a 4 e
menor que 7, PROVA FINAL; se a média for menor que
4, REPROVADO.*/
// Autor(a)    : Jardeanne da Silva Ferreira

#include <stdio.h>
#include <math.h>



int main(int argc, char** argv)
{
	int nota1, nota2, nota3, media;
	
	printf("Digite três valores: \n\n\n");
	scanf("%i", &nota1);
	scanf("%i", &nota2);
	scanf("%i", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
if (media >= 7) {
printf("\nAPROVADO COM MEDIA %i.\n", media);
}

 	if(media>=4 && media <7){
	printf("\nPROVA FINAL\n");
    printf("\nSua media foi de %i", media);
	 }
	if(media <4){
printf("REPROVADO\nVAI ESTUDAR MIZERA\n");
printf("\nSua media foi de %i.", media);
	}
	 
	
return 0;

}