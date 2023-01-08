#include <stdio.h>
int main()
{
int i,cont=0,cont1=0,cont2=0,cont3=0;
float nota,somaNota,somaMedia7=0,maior,menor=10;
for (i=1;i<=40;i++)
	{
	printf("Digite a nota do aluno%d:\n", i);
	scanf("%f", &nota);
	if (nota>=0 && nota<=10)
		{	
		somaNota+=nota;
		if (nota>=maior)
		maior=nota;
		if (nota<=menor)
		menor=nota;
		}
	if (nota>7 && nota<=10)
		{
		   	somaMedia7+=nota;
			cont3++;
		}	
	if (nota<0 || nota >10)
		{
		do {
			printf("informe uma nota valida\n");
			scanf("%f",&nota);
			if (nota>=7 && nota<=10)
				{
				cont++;
				somaNota+=nota;
				if (nota>=maior)
		  		maior=nota;
				if (nota<=menor)
				menor=nota;
				}
			if (nota>7 && nota<=10)
				{
				somaMedia7+=nota;
				cont3++;   	
				}
			else if (nota>=4 && nota<7)
				{
				cont1++;
				somaNota+=nota;
				if (nota>=maior)
				maior=nota;
				if (nota<=menor)
				menor=nota;
				}
			else if (nota>=0 && nota<4 )
				{
				cont2++;
				somaNota+=nota;
				if (nota>=maior)
				maior=nota;
				if (nota<=menor)
				menor=nota;
				}	
		  }	
		while(nota<0 || nota >10);
		}
	else if (nota>=7 && nota<=10)
		cont++;
	else if (nota>=4 && nota<7)
		cont1++;
	else if (nota>=0 && nota<4 )
		cont2++;
	else if (nota>7 && nota<=10)
		cont3++;	
	}
	printf("\nQuantidade de notas maiores ou iguais a 7 = %d\nPorcentagem = %.2f%%\n", cont, (cont/40.0)*100);	
	printf("\nQuantidade de notas maiores ou iguais a 4 e menores que 7 = %d\nPorcentagem = %.2f%%\n", cont1, (cont1/40.0)*100);
	printf("\nQuantidade de notas maiores ou iguais a 4 = %d\nPorcentagem = %.2f%%\n", cont2, (cont2/40.0)*100);	
	printf("\nMaior nota = %.2f\n", maior);
	printf("\nMenor nota = %.2f\n", menor);
	printf("\nMedia das notas = %.2f\n", somaNota/40.0);
	if (cont3==0)
	printf("Media das notas maiores que 7 = 0");
	else
	printf("\nMedia das notas maiores que 7 = %.2f", somaMedia7/cont3);
	
	return 0;
}	