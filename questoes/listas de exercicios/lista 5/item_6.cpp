#include <stdio.h>
int main()
{
int i,numAlunos,j=1, cont, salunos=0;
float media,mediaGeral, soma=0;
for (i=1; i<=5; i++)
	{
	cont=0;
	printf("Numero de alunos da turma %d\n", i);
	scanf("%d",&numAlunos);
	salunos+=numAlunos;
	for(j=1;j<=numAlunos;j++)
		{
			printf("Digite a media do aluno:\n");
			scanf("%f", &media);
			if (media>=0 && media<=10)
			soma+= media;
			if (media<0 || media >10)
					{
					do
					   	{
						printf("informe uma media valida\n");
						scanf("%f",&media);
						if (media>7 && media<=10)
							{
							   	soma+=media;
								cont++;
							}
					   	}
					while(media<0 || media >10);
					}
			else if (media>7 && media<=10)
			cont++;
		}
			printf("\nAlunos da turma %d com notas superior a 7 = %d\n\n", i, cont);
	}
	mediaGeral=soma/salunos;
	printf("Media Geral da Escola = %.2f", mediaGeral);
	return 0;
}
